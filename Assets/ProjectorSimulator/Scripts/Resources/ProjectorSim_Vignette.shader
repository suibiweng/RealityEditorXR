Shader "Hidden/ProjectorSimVignette"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
		_Channel("Channel Index", int) = 0
	}

		SubShader
	{
		Pass
		{
			CGPROGRAM
			#pragma vertex vert_img
			#pragma fragment frag
			//#pragma enable_d3d11_debug_symbols
			#include "UnityCG.cginc"
			uniform sampler2D _MainTex;
			
			float _vignetteOffsetX;
			float _vignetteOffsetY;
			float _vignetteRadius = 0.1;
			float _vignetteFadeSize = 10;
			float _aspectRatio = 1.0;

			int circle = 0;

			inline float getHypotenuseLength(float sideA, float sideB)
			{
				return sqrt((sideA*sideA) + (sideB*sideB));
			}

			float4 frag(v2f_img i) : COLOR
			{
				float u = i.uv[0];
				float v = i.uv[1];
				
				float hor, ver;
				hor = u - _vignetteOffsetX; // get pixel distance from centre of vignette
				ver = v - _vignetteOffsetY;

				// get pixel colour from projected image
				float4 c = tex2D(_MainTex, half2(u, v));

				// vignette
				if (_vignetteRadius > 0 || true) // is vignette enabled?
				{
					if (circle)
					{
						float pixelRadius = getHypotenuseLength(hor, ver / _aspectRatio); // get the distance from the centre of the image to this pixel
						if (pixelRadius > _vignetteRadius + _vignetteFadeSize)
							return float4(0, 0, 0, 0);
						else if (pixelRadius > _vignetteRadius)
						{
							return c * (((_vignetteRadius + _vignetteFadeSize) - pixelRadius) / _vignetteFadeSize);
						}
					}
					else // soften edges
					{
						hor += 0.5;
						ver += 0.5;
						float edgeDistanceX = min(hor, 1 - hor);
						float edgeDistanceY = min(ver, 1 - ver);
						float edgeDistance;

						if (edgeDistanceX > _vignetteFadeSize || edgeDistanceY > _vignetteFadeSize)
						{
							float edgeDistance = min(edgeDistanceX, edgeDistanceY);
							edgeDistance -= _vignetteRadius;

							if (edgeDistance < _vignetteFadeSize)
							{
								return c * (edgeDistance / _vignetteFadeSize);
							}
						}
						else // we are in a corner
						{
							edgeDistance = getHypotenuseLength(_vignetteFadeSize - edgeDistanceX, _vignetteFadeSize - edgeDistanceY); // get distance to vignette corner
							edgeDistance += _vignetteRadius;

							if (edgeDistance > _vignetteFadeSize)
							{
								return float4(0, 0, 0, 0);
							}

							return c * (1-(edgeDistance / _vignetteFadeSize));
						}
					}
				}

				return c;
			}
			ENDCG
		}
	}
}
