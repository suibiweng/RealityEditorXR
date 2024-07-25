Shader "Unlit/DepthGradient"
{
    Properties
    {
        _MainTex ("Main Texture", 2D) = "black" {}
        _MinDistance ("Min Distance", Float) = 0.0
        _MaxDistance ("Max Distance", Float) = 8.0
    }
    SubShader
    {
        Tags
        {
            "Queue" = "Geometry"
            "RenderType" = "Opaque"
        }
        Pass
        {
            Cull Off
            ZTest Always
            ZWrite Off
            Lighting Off
            LOD 100

            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
                float2 texcoord : TEXCOORD0;
            };

            struct v2f
            {
                float4 position : SV_POSITION;
                float2 texcoord : TEXCOORD0;
            };

            sampler2D _MainTex;
            float _MinDistance;
            float _MaxDistance;

            v2f vert (appdata v)
            {
                v2f o;
                o.position = UnityObjectToClipPos(v.vertex);
                o.texcoord = v.texcoord;
                return o;
            }

            fixed3 HSVtoRGB(fixed3 c)
            {
                fixed4 K = fixed4(1.0, 2.0/3.0, 1.0/3.0, 3.0);
                fixed3 p = abs(frac(c.xxx + K.xyz) * 6.0 - K.www);
                return c.z * lerp(K.xxx, saturate(p - K.xxx), c.y);
            }

            fixed4 frag (v2f i) : SV_Target
            {
                float envDistance = tex2D(_MainTex, i.texcoord).r;
                float lerpFactor = (envDistance - _MinDistance) / (_MaxDistance - _MinDistance);
                float hue = lerp(0.70, -0.15, saturate(lerpFactor));
                if (hue < 0.0)
                {
                    hue += 1.0;
                }
                fixed3 color = fixed3(hue, 0.9, 0.6);
                return fixed4(HSVtoRGB(color), 1.0);
            }

            ENDCG
        }
    }
    FallBack "Diffuse"
}
