//#include <windows.h>  //Solo para Windows
//#include <GL/gl.h>     // The GL Header File
//#include <stdio.h>

//#include <math.h>
#include "Main.h"


class CFiguras
{
	public:

	float text_der;
	float text_izq;

	void esfera(GLfloat radio, int meridianos, int paralelos, GLuint text); //Funcíon creacion esfera
	void cilindro(float radio, float altura, int resolucion, GLuint text);	//Funcíon creacion cilindro
	void cono(float altura, float radio, int resolucion, GLuint text);		//Funcíon creacion cono
	void prisma_anun (GLuint text, GLuint text2);							//Funcíon creacion movimiento
	void prisma (float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma
	void prisma2 (GLuint text, GLuint text2);
	void skybox(float altura, float largo, float profundidad, GLuint text);	//Funcion creacion cielo
	void skybox2 (float altura, float largo, float profundidad, GLuint text);
	
	void prisma_m1(float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma de mostrador_1_KP
	void prisma_m2(float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma de mostrador_2_KP
	void prisma_e1(float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma de estante_1_KP
	void prisma_e2(float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma de estante_2_KP
	void prisma_e3(float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma de estante_3_KP
	void prisma_e4(float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma de estante_4_KP
	void prisma_estufa(float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma de estufa_KP
	void prisma_fregadero(float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma de fregadero_KP
	void prisma_madera(float altura, float largo, float profundidad, GLuint text);//Funcíon creacion prisma de madera_KP
	void prisma_R(GLuint text, GLuint text2);//Prisma con borde recto_KP
	void prisma_r(GLuint text, GLuint text2);//Prisma con borde redondo_KP
	void prisma_RR(GLuint text, GLuint text2);//"Semiesfera"_KP
	//void torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos, GLuint text );
	void torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos);

	void tecla (float altura, float largo, float profundidad, GLuint text);

};
