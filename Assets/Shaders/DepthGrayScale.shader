Shader "Unlit/DepthGrayscale"
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

            fixed4 frag (v2f i) : SV_Target
            {
                float envDistance = tex2D(_MainTex, i.texcoord).r;
                float lerpFactor = (envDistance - _MinDistance) / (_MaxDistance - _MinDistance);
                float grayValue = saturate(1.0 - lerpFactor); // Invert lerpFactor to make 0 far and 1 near
                return fixed4(grayValue, grayValue, grayValue, 1.0);
            }

            ENDCG
        }
    }
    FallBack "Diffuse"
}
