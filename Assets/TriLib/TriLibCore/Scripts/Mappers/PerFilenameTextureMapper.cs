using System.IO;
using TriLibCore.General;
using TriLibCore.Utils;

namespace TriLibCore.Mappers
{
    public class PerFilenameTextureMapper : TextureMapper
    {
        public override void Map(TextureLoadingContext textureLoadingContext)
        {
            if (textureLoadingContext.Context.Filename == null)
            {
                return;
            }
            var directory = FileUtils.GetFileDirectory(textureLoadingContext.Context.Filename);
            if (Directory.Exists(directory))
            {
                var modelShortFilename = FileUtils.GetShortFilename(textureLoadingContext.Context.Filename).ToLowerInvariant();
                var files = Directory.GetFiles(directory);
                foreach (var file in files)
                {
                    if (!TextureUtils.IsValidTextureFileType(file))
                    {
                        continue;
                    }
                    var shortFilename = FileUtils.GetShortFilename(file).ToLowerInvariant();
                    if (modelShortFilename == shortFilename) 
                    {
                        textureLoadingContext.Stream = File.OpenRead(file);
                        return;
                    }
                }
            }
        }
    }
}