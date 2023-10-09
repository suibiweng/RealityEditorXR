#pragma warning disable 168, 618
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text.RegularExpressions;
using TriLibCore.Extensions;
using TriLibCore.General;
using TriLibCore.Interfaces;
using TriLibCore.Mappers;
using TriLibCore.Textures;
using TriLibCore.Utils;
using UnityEngine;
using FileMode = System.IO.FileMode;
using HumanDescription = UnityEngine.HumanDescription;
using Object = UnityEngine.Object;
using System.Collections;
using TriLibCore.Attributes;
#if TRILIB_DRACO
using TriLibCore.Gltf.Reader;
using TriLibCore.Gltf.Draco;
#endif
#if UNITY_EDITOR
using UnityEditor;
#endif
namespace TriLibCore
{
    public partial class AssetLoader
    {
        private static IEnumerator ProcessModel_Coroutine(AssetLoaderContext assetLoaderContext)
        {
            if (assetLoaderContext.RootModel != null)
            {
                yield return ParseModel_Coroutine(assetLoaderContext, assetLoaderContext.WrapperGameObject != null ? assetLoaderContext.WrapperGameObject.transform : null, assetLoaderContext.RootModel, assetLoaderContext.RootModel, true);
                if (assetLoaderContext.RootGameObject.transform.localScale.sqrMagnitude == 0f)
                {
                    assetLoaderContext.RootGameObject.transform.localScale = Vector3.one;
                }
                if (assetLoaderContext.Options.AnimationType != AnimationType.None || assetLoaderContext.Options.ImportBlendShapes)
                {
                    yield return SetupModelBones_Coroutine(assetLoaderContext, assetLoaderContext.RootModel);
                    yield return SetupModelLod_Coroutine(assetLoaderContext, assetLoaderContext.RootModel);
                    yield return BuildGameObjectsPaths_Coroutine(assetLoaderContext);
                    yield return SetupRig_Coroutine(assetLoaderContext);
                }
                assetLoaderContext.RootGameObject.isStatic = assetLoaderContext.Options.Static;
            }
            assetLoaderContext.OnLoad?.Invoke(assetLoaderContext);
            //[MainThreadStallCheck]
            if (assetLoaderContext.MainThreadStall)
            {
                yield return null;
            }
        }
        private static IEnumerator SetupModelLod_Coroutine(AssetLoaderContext assetLoaderContext, IModel model)
        {
            if (model.Children != null && model.Children.Count > 0)
            {
                var lodModels = new Dictionary<int, List<Renderer>>(model.Children.Count);
                var minLod = int.MaxValue;
                var maxLod = 0;
                for (var i = 0; i < model.Children.Count; i++)
                {
                    var child = model.Children[i];
                    var match = Regex.Match(child.Name, "_LOD(?<number>[0-9]+)|LOD_(?<number>[0-9]+)");
                    if (match.Success)
                    {
                        var lodNumber = Convert.ToInt32(match.Groups["number"].Value);
                        minLod = Mathf.Min(lodNumber, minLod);
                        maxLod = Mathf.Max(lodNumber, maxLod);
                        if (!lodModels.TryGetValue(lodNumber, out var renderers))
                        {
                            renderers = new List<Renderer>();
                            lodModels.Add(lodNumber, renderers);
                        }
                        renderers.AddRange(assetLoaderContext.GameObjects[child].GetComponentsInChildren<Renderer>());
                    }
                    //[MainThreadStallCheck]
                    if (assetLoaderContext.MainThreadStall)
                    {
                        yield return null;
                    }
                }
                if (lodModels.Count > 1)
                {
                    var newGameObject = assetLoaderContext.GameObjects[model];
                    var lods = new List<LOD>(lodModels.Count + 1);
                    var lodGroup = newGameObject.AddComponent<LODGroup>();
                    var lastPosition = assetLoaderContext.Options.LODScreenRelativeTransitionHeightBase;
                    for (var i = minLod; i <= maxLod; i++)
                    {
                        if (lodModels.TryGetValue(i, out var renderers))
                        {
                            lods.Add(new LOD(lastPosition, renderers.ToArray()));
                            lastPosition *= 0.5f;
                        }
                    }
                    lodGroup.SetLODs(lods.ToArray());
                }
                for (var i = 0; i < model.Children.Count; i++)
                {
                    var child = model.Children[i];
                    yield return SetupModelLod_Coroutine(assetLoaderContext, child);
                }
            }
        }
        private static IEnumerator BuildGameObjectsPaths_Coroutine(AssetLoaderContext assetLoaderContext)
        {
            foreach (var value in assetLoaderContext.GameObjects.Values)
            {
                assetLoaderContext.GameObjectPaths.Add(value, value.transform.BuildPath(assetLoaderContext.RootGameObject.transform));
                //[MainThreadStallCheck]
                if (assetLoaderContext.MainThreadStall)
                {
                    yield return null;
                }
            }
        }
        private static IEnumerator SetupRig_Coroutine(AssetLoaderContext assetLoaderContext)
        {
            var animations = assetLoaderContext.RootModel.AllAnimations;
            AnimationClip[] animationClips = null;
            if (assetLoaderContext.Options.AnimationType == AnimationType.Humanoid || animations != null && animations.Count > 0)
            {
                switch (assetLoaderContext.Options.AnimationType)
                {
                    case AnimationType.Legacy:
                        {
                            SetupAnimationComponents(assetLoaderContext, animations, out animationClips, out var animator, out var unityAnimation);
                            break;
                        }
                    case AnimationType.Generic:
                        {
                            SetupAnimationComponents(assetLoaderContext, animations, out animationClips, out var animator, out var unityAnimation);
                            if (assetLoaderContext.Options.AvatarDefinition == AvatarDefinitionType.CopyFromOtherAvatar)
                            {
                                animator.avatar = assetLoaderContext.Options.Avatar;
                            }
                            else
                            {
                                SetupGenericAvatar(assetLoaderContext, animator);
                            }
                            break;
                        }
                    case AnimationType.Humanoid:
                        {
                            SetupAnimationComponents(assetLoaderContext, animations, out animationClips, out var animator, out var unityAnimation);
                            if (assetLoaderContext.Options.AvatarDefinition == AvatarDefinitionType.CopyFromOtherAvatar)
                            {
                                animator.avatar = assetLoaderContext.Options.Avatar;
                            }
                            else if (assetLoaderContext.Options.HumanoidAvatarMapper != null)
                            {
                                SetupHumanoidAvatar(assetLoaderContext, animator);
                            }
                            break;
                        }
                }
                //[MainThreadStallCheck]
                if (assetLoaderContext.MainThreadStall)
                {
                    yield return null;
                }
                if (animationClips != null)
                {
                    if (assetLoaderContext.Options.AnimationClipMappers != null)
                    {
                        Array.Sort(assetLoaderContext.Options.AnimationClipMappers, (a, b) => a.CheckingOrder > b.CheckingOrder ? -1 : 1);
                        foreach (var animationClipMapper in assetLoaderContext.Options.AnimationClipMappers)
                        {
                            animationClips = animationClipMapper.MapArray(assetLoaderContext, animationClips);
                            //[MainThreadStallCheck]
                            if (assetLoaderContext.MainThreadStall)
                            {
                                yield return null;
                            }
                            if (animationClips != null && animationClips.Length > 0)
                            {
                                break;
                            }
                        }
                    }
                    for (var i = 0; i < animationClips.Length; i++)
                    {
                        var animationClip = animationClips[i];
                        assetLoaderContext.Allocations.Add(animationClip);
                    }
                }
            }
        }
        private static IEnumerator ParseModel_Coroutine(AssetLoaderContext assetLoaderContext, Transform parentTransform, IRootModel rootModel, IModel model, bool isRootGameObject)
        {
            var newGameObject = new GameObject(model.Name);
            assetLoaderContext.GameObjects.Add(model, newGameObject);
            assetLoaderContext.Models.Add(newGameObject, model);
            newGameObject.transform.parent = parentTransform;
            newGameObject.transform.localPosition = model.LocalPosition;
            newGameObject.transform.localRotation = model.LocalRotation;
            newGameObject.transform.localScale = model.LocalScale;
            if (model.GeometryGroup != null)
            {
                ParseGeometry(assetLoaderContext, newGameObject, rootModel, model);
            }
            if (assetLoaderContext.Options.ImportCameras && model is ICamera camera)
            {
                var unityCamera = newGameObject.AddComponent<Camera>();
                unityCamera.aspect = camera.AspectRatio;
                unityCamera.orthographic = camera.Ortographic;
                unityCamera.orthographicSize = camera.OrtographicSize;
                unityCamera.fieldOfView = camera.FieldOfView;
                unityCamera.nearClipPlane = camera.NearClipPlane;
                unityCamera.farClipPlane = camera.FarClipPlane;
                unityCamera.focalLength = camera.FocalLength;
                unityCamera.sensorSize = camera.SensorSize;
                unityCamera.lensShift = camera.LensShift;
                unityCamera.gateFit = camera.GateFitMode;
                unityCamera.usePhysicalProperties = camera.PhysicalCamera;
            }
            if (assetLoaderContext.Options.ImportLights && model is ILight light)
            {
                var unityLight = newGameObject.AddComponent<Light>();
                unityLight.color = light.Color;
                unityLight.innerSpotAngle = light.InnerSpotAngle;
                unityLight.spotAngle = light.OuterSpotAngle;
                unityLight.intensity = light.Intensity;
                unityLight.range = light.Range;
                unityLight.type = light.LightType;
#if UNITY_EDITOR
                unityLight.areaSize = new Vector2(light.Width, light.Height);
#endif
            }
            if (model.Children != null && model.Children.Count > 0)
            {
                for (var i = 0; i < model.Children.Count; i++)
                {
                    var child = model.Children[i];
                    yield return ParseModel_Coroutine(assetLoaderContext, newGameObject.transform, rootModel, child, false);
                }
            }
            if (assetLoaderContext.Options.UserPropertiesMapper != null && model.UserProperties != null)
            {
                foreach (var userProperty in model.UserProperties)
                {
                    assetLoaderContext.Options.UserPropertiesMapper.OnProcessUserData(assetLoaderContext, newGameObject, userProperty.Key, userProperty.Value);
                    //[MainThreadStallCheck]
                    if (assetLoaderContext.MainThreadStall)
                    {
                        yield return null;
                    }
                }
            }
            if (isRootGameObject)
            {
                assetLoaderContext.RootGameObject = newGameObject;
            }
        }
        private static IEnumerator SetupModelBones_Coroutine(AssetLoaderContext assetLoaderContext, IModel model)
        {
            var loadedGameObject = assetLoaderContext.GameObjects[model];
            var skinnedMeshRenderer = loadedGameObject.GetComponent<SkinnedMeshRenderer>();
            if (skinnedMeshRenderer != null)
            {
                var bones = model.Bones;
                if (bones != null && bones.Count > 0)
                {
                    var boneIndex = 0;
                    var gameObjectBones = skinnedMeshRenderer.bones;
                    for (var i = 0; i < bones.Count; i++)
                    {
                        var bone = bones[i];
                        gameObjectBones[boneIndex++] = assetLoaderContext.GameObjects[bone].transform;
                    }
                    skinnedMeshRenderer.bones = gameObjectBones;
                    skinnedMeshRenderer.rootBone = assetLoaderContext.Options.RootBoneMapper.Map(assetLoaderContext, gameObjectBones);
                }
                //[MainThreadStallCheck]
                if (assetLoaderContext.MainThreadStall)
                {
                    yield return null;
                }
            }
            if (model.Children != null && model.Children.Count > 0)
            {
                for (var i = 0; i < model.Children.Count; i++)
                {
                    var subModel = model.Children[i];
                    yield return SetupModelBones_Coroutine(assetLoaderContext, subModel);
                }
            }
        }
        private static IEnumerator LoadModel_Coroutine(AssetLoaderContext assetLoaderContext)
        {
            yield return SetupModelLoading_Coroutine(assetLoaderContext);
            //[MainThreadStallCheck]
            if (assetLoaderContext.MainThreadStall)
            {
                yield return null;
            }
        }
        private static IEnumerator SetupModelLoading_Coroutine(AssetLoaderContext assetLoaderContext)
        {
            if (assetLoaderContext.Stream == null && string.IsNullOrWhiteSpace(assetLoaderContext.Filename))
            {
                throw new Exception("TriLib is unable to load the given file.");
            }
            if (assetLoaderContext.Options.MaterialMappers != null)
            {
                Array.Sort(assetLoaderContext.Options.MaterialMappers, (a, b) => a.CheckingOrder > b.CheckingOrder ? -1 : 1);
            }
            else
            {
                if (assetLoaderContext.Options.ShowLoadingWarnings)
                {
                    Debug.LogWarning("Your AssetLoaderOptions instance has no MaterialMappers. TriLib can't process materials without them.");
                }
            }
#if TRILIB_DRACO
            GltfReader.DracoDecompressorCallback = DracoMeshLoader.DracoDecompressorCallback;
#endif
            var fileExtension = assetLoaderContext.FileExtension;
            if (fileExtension == null)
            {
                fileExtension = FileUtils.GetFileExtension(assetLoaderContext.Filename, false);
            }
            else if (fileExtension[0] == '.' && fileExtension.Length > 1)
            {
                fileExtension = fileExtension.Substring(1);
            }
            if (assetLoaderContext.Stream == null)
            {
                var fileStream = new FileStream(assetLoaderContext.Filename, FileMode.Open, FileAccess.Read, FileShare.Read);
                assetLoaderContext.Stream = fileStream;
                var reader = Readers.FindReaderForExtension(fileExtension);
                if (reader != null)
                {
                    yield return reader.ReadStream_Coroutine(fileStream, assetLoaderContext, assetLoaderContext.Filename, assetLoaderContext.OnProgress);
                    assetLoaderContext.RootModel = (IRootModel)
                    assetLoaderContext.Stack.Pop();
                    ;
                }
            }
            else
            {
                var reader = Readers.FindReaderForExtension(fileExtension);
                if (reader != null)
                {
                    yield return reader.ReadStream_Coroutine(assetLoaderContext.Stream, assetLoaderContext, assetLoaderContext.Filename, assetLoaderContext.OnProgress);
                    assetLoaderContext.RootModel = (IRootModel)
                    assetLoaderContext.Stack.Pop();
                    ;
                }
                else
                {
                    throw new Exception("Could not find a suitable reader for the given model. Please fill the 'fileExtension' parameter when calling any model loading method.");
                }
                if (assetLoaderContext.RootModel == null)
                {
                    throw new Exception("TriLib could not load the given model.");
                }
            }
        }
        private static IEnumerator ProcessRootModel_Coroutine(AssetLoaderContext assetLoaderContext)
        {
            yield return ProcessModel_Coroutine(assetLoaderContext);
            ProcessMaterials(assetLoaderContext);
        }
        private static IEnumerator ProcessMaterialRenderers_Coroutine(AssetLoaderContext assetLoaderContext)
        {
            var materialMapperContexts = new MaterialMapperContext[assetLoaderContext.RootModel.AllMaterials.Count];
            for (var i = 0; i < assetLoaderContext.RootModel.AllMaterials.Count; i++)
            {
                var material = assetLoaderContext.RootModel.AllMaterials[i];
                var materialMapperContext = new MaterialMapperContext()
                {
                    Context = assetLoaderContext,
                    Material = material
                };
                materialMapperContexts[i] = materialMapperContext;
                for (var j = 0; j < assetLoaderContext.Options.MaterialMappers.Length; j++)
                {
                    var materialMapper = assetLoaderContext.Options.MaterialMappers[j];
                    if (materialMapper is object && materialMapper.IsCompatible(materialMapperContext))
                    {
                        materialMapperContext.MaterialMapper = materialMapper;
                        materialMapper.Map(materialMapperContext);
                        //[MainThreadStallCheck]
                        if (assetLoaderContext.MainThreadStall)
                        {
                            yield return null;
                        }
                        materialMapperContext.AddPostProcessingActionToMainThread(ApplyMaterialToRenderers, materialMapperContext);
                        break;
                    }
                }
                assetLoaderContext.Reader.UpdateLoadingPercentage(i, assetLoaderContext.Reader.LoadingStepsCount + (int)ReaderBase.PostLoadingSteps.PostProcessRenderers, assetLoaderContext.RootModel.AllMaterials.Count);
            }
            if (assetLoaderContext.Options.DiscardUnusedTextures)
            {
                assetLoaderContext.ExecuteActionsQueue(FinishLoading);
            }
            else
            {
                assetLoaderContext.ExecuteActionsQueue(LoadUnusedTextures);
            }
        }
    }
}
