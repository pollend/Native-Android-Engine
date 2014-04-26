
varying mediump vec2 p_TexCoords;
varying mediump vec3 p_normals;

uniform mediump mat4 in_light;
uniform mediump mat4 in_Transform;
uniform mediump mat4 in_View;

varying mediump vec3 p_camPosition;


void main()
{
	mediump vec3 llight = (in_light * vec4(0.0,0.0,0.0,1.0)).xyz;
	mediump vec3 lhalfangle = normalize((p_camPosition + llight)/length(p_camPosition + llight));

	mediump float lfinal = ((20.0+8.0)/(8.0*3.14)) * max(dot(p_normals,lhalfangle),0.0);
	gl_FragColor = vec4(lfinal,lfinal,lfinal,1.0);
}