Shader "Hidden/ProjectorSimSinglePass"
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
			#include "UnityCG.cginc"
			uniform sampler2D _MainTex;
			uniform float4 _PJSimTransform;
			uniform int _PJSimCookieSize;
			int _Channel;

			float4 frag(v2f_img i) : COLOR
			{
				float scale = 2;
				float offset = 0.5;
				float u = _PJSimTransform.z + (i.uv[0] * _PJSimTransform.x);
				float v = _PJSimTransform.w + (i.uv[1] * _PJSimTransform.y);
				float borderSize = 2.0 / (float)_PJSimCookieSize;
				if (u <= borderSize || u >= 1 - borderSize || v <= borderSize || v >= 1 - borderSize /* || (u % 0.1 > 0.05 && v % 0.1 > 0.05)*/)
					return float4(0, 0, 0, 0);
				float4 c = tex2D(_MainTex, half2(u,v));
				return c[_Channel];
			}
			ENDCG
		}
	}
}
