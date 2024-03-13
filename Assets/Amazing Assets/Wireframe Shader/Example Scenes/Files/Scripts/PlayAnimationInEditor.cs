using UnityEngine;


namespace AmazingAssets.WireframeShader.Example
{
    [ExecuteAlways]
    public class PlayAnimationInEditor : MonoBehaviour
    {
        public AnimationClip animationClip;

        [Space(10)]
        [Range(0f, 3f)]
        public float speed = 1;
        

        new Animation animation;

        private void OnDrawGizmos()
        {
            if (Application.isPlaying == false && animationClip != null)
            {
                if (animation == null)
                    animation = GetComponent<Animation>();


                if (animation.isPlaying == false)
                {
                    animation.Play(animationClip.name);
                    animation[animationClip.name].time = Random.Range(0f, 3f);
                }

                animation[animationClip.name].time += Time.deltaTime * speed;
                animation.Sample();

#if UNITY_EDITOR
                UnityEditor.SceneView.lastActiveSceneView.Repaint();
#endif
            }
        }
    }
}