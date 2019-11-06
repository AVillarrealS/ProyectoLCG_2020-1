#include "figuras.h"


const double PI = 3.1415926535897;
float text_der = 1.0;
float text_izq = 0.0;

void CFiguras::skybox(float largo, float altura, float profundidad, GLuint text)  //Funcion creacion cielo
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas Vértice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		//glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			//glColor3f(0.0,1.0,0.0);
			glNormal3f( 0.0f, 0.0f,1.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(1.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			//glColor3f(0.4,0.2,0.6);
			glNormal3f( 0.0f,1.0f, 0.0f);
			//glTexCoord2f(0.0f, 0.0f); 
			glVertex3fv(vertice[0]);
			//glTexCoord2f(1.0f, 0.0f); 
			glVertex3fv(vertice[1]);
			//glTexCoord2f(1.0f, 1.0f); 
			glVertex3fv(vertice[2]);
			//glTexCoord2f(0.0f, 1.0f); 
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			//glColor3f(0.8,0.2,0.4);
			glNormal3f( 0.0f, -1.0f, 0.0f);
			//glTexCoord2f(0.0f, 0.0f); 
			glVertex3fv(vertice[4]);
			//glTexCoord2f(1.0f, 0.0f); 
			glVertex3fv(vertice[5]);
			//glTexCoord2f(1.0f, 1.0f); 
			glVertex3fv(vertice[6]);
			//glTexCoord2f(0.0f, 1.0f); 
        	glVertex3fv(vertice[7]);
		glEnd();
}

void CFiguras::skybox2 (float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas Vértice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 3.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(3.0f, 3.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(3.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(3.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(3.0f, 3.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 3.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(1.0f, 0.0f, 0.0f);
			glTexCoord2f(3.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(3.0f, 3.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 3.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			glNormal3f( 0.0f,1.0f, 0.0f);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();
}



void CFiguras::prisma (float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas Vértice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		//glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			//glColor3f(0.0,1.0,0.0);
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			//glColor3f(0.4,0.2,0.6);
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			//glColor3f(0.8,0.2,0.4);
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
		glEnd();
}

void CFiguras::prisma2 (GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

		
		glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
		//glBindTexture(GL_TEXTURE_2D, texture[filter]);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
		glEnd();
	
		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			//glColor3f(0.0,1.0,0.0);
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			//glColor3f(0.4,0.2,0.6);
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);  //Top
			//glColor3f(0.8,0.2,0.4);
			glNormal3f( 0.0f,1.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
		glEnd();
}

void CFiguras::prisma_anun (GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

		
		glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, 1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
		glEnd();
	
		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			//glColor3f(0.0,1.0,0.0);
			glNormal3f( 0.0f, 0.0f,-1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(-1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			//glColor3f(0.4,0.2,0.6);
			glNormal3f( 0.0f,-1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);  //Top
			//glColor3f(0.8,0.2,0.4);
		glNormal3f( 0.0f,1.0f, 0.0f);
			glTexCoord2f(text_der, 0.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(text_der, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(text_izq, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(text_izq, 0.0f); glVertex3fv(vertice[7]);
		glEnd();
}




void CFiguras::esfera(GLfloat radio, int meridianos, int paralelos, GLuint text )
{
	GLdouble theta, phi;

	float ctext_s = 1.0/meridianos;
	float ctext_t = 1.0/paralelos;

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.

	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};
	int i, j;
	float angulom, angulop;
	angulom=2*3.141592654/meridianos;
	angulop=3.141592654/paralelos; 
	for(i=0;i<meridianos;i++)
	{
		for(j=0;j<paralelos;j++)
		{
			v1[0]=radio*cos(angulom*i)*sin(angulop*j);
			v1[1]=radio*cos(angulop*j);
			v1[2]=radio*sin(angulom*i)*sin(angulop*j);
			
			v2[0]=radio*cos(angulom*i)*sin(angulop*(j+1));
			v2[1]=radio*cos(angulop*(j+1));
			v2[2]=radio*sin(angulom*i)*sin(angulop*(j+1));
			
			v3[0]=radio*cos(angulom*(i+1))*sin(angulop*(j+1));
			v3[1]=radio*cos(angulop*(j+1));
			v3[2]=radio*sin(angulom*(i+1))*sin(angulop*(j+1));

			v4[0]=radio*cos(angulom*(i+1))*sin(angulop*j);
			v4[1]=radio*cos(angulop*j);
			v4[2]=radio*sin(angulom*(i+1))*sin(angulop*j);
			
			glBegin(GL_POLYGON);
				glNormal3fv(v1);
				glTexCoord2f(ctext_s*i, -ctext_t*j);	
				glVertex3fv(v1);
				glNormal3fv(v2);
				glTexCoord2f(ctext_s*i, -ctext_t*(j+1));	
				glVertex3fv(v2);
				glNormal3fv(v3);
				glTexCoord2f(ctext_s*(i+1), -ctext_t*(j+1));	
				glVertex3fv(v3);
				glNormal3fv(v4);
				glTexCoord2f(ctext_s*(i+1), -ctext_t*j);	
				glVertex3fv(v4);
			glEnd();
		}
	}
}

void CFiguras::torus(GLfloat radioM, GLfloat radiom, int meridianos, int paralelos )
{

	float R = 0;
	float r = 0;

	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	int i,j;

	GLdouble angulop = 2*3.1415/paralelos;
	GLdouble angulom = 2*3.1415/meridianos;

	r = (radioM - radiom)/2;
	R = radiom + r;

	for(i=0;i<meridianos;i++)
	{
		for(j=0;j<paralelos;j++)
		{
			
			v1[0]=R*cos(angulom*i) + r*cos(angulom*i)*cos(angulop*j);
			v1[2]=R*sin(angulom*i)+ r*sin(angulom*i)*cos(angulop*j);
			v1[1]=r*sin(angulop*j);

			glNormal3f(v1[0], v1[1], v1[2]);
			
			v2[0]=R*cos(angulom*i) + r*cos(angulom*i)*cos(angulop*(j+1));
			v2[2]=R*sin(angulom*i) + r*sin(angulom*i)*cos(angulop*(j+1));
			v2[1]=r*sin(angulop*(j+1));

			glNormal3f(v2[0], v2[1], v2[2]);

			v3[0]=R*cos(angulom*(i+1)) + r*cos(angulom*(i+1))*cos(angulop*(j+1));
			v3[2]=R*sin(angulom*(i+1)) + r*sin(angulom*(i+1))*cos(angulop*(j+1));
			v3[1]=r*sin(angulop*(j+1));

			glNormal3f(v3[0], v3[1], v3[2]);

			v4[0]=R*cos(angulom*(i+1)) + r*cos(angulom*(i+1))*cos(angulop*j);
			v4[2]=R*sin(angulom*(i+1)) + r*sin(angulom*(i+1))*cos(angulop*j);
			v4[1]=r*sin(angulop*j);

			glNormal3f(v4[0], v4[1], v4[2]);
			
			
			//glBegin(GL_LINE_LOOP);
			glBegin(GL_POLYGON);
				glVertex3fv(v1);
				glVertex3fv(v2);
				glVertex3fv(v3);
				glVertex3fv(v4);
			glEnd();
		}
	}
}

void CFiguras::cono(float altura, float radio, int resolucion, GLuint text)
{
	
	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};

	float angulo=2*3.14/resolucion;
	float ctext_s = 1.0/resolucion;
	
	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	for(int i=0; i <resolucion; i++)
	{
		
		v2[0]=radio*cos(angulo*i);
		v2[1]=0;
		v2[2]=radio*sin(angulo*i);

		v3[0]=radio*cos(angulo*(i+1));
		v3[1]=0;
		v3[2]=radio*sin(angulo*(i+1));
		
		//glBegin(GL_LINE_LOOP);
        glBegin(GL_POLYGON); //Construye Base
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3f(0.0,0.0,0.0);
			glVertex3fv(v2);
			glVertex3fv(v3);
		glEnd();


		glBindTexture(GL_TEXTURE_2D, text);
		glBegin(GL_TRIANGLES);
			glNormal3f( v2[0], 0.0f, v2[2]);
			glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
			glTexCoord2f(ctext_s*(i+1), 0.0f);	glVertex3fv(v3);
			glTexCoord2f(ctext_s*i, 1.0f);	glVertex3f(0.0,altura,0.0);
		glEnd();
	}
}

void CFiguras::cilindro(float radio, float altura, int resolucion, GLuint text)
{
	
	float v1[]={0.0, 0.0, 0.0};
	float v2[]={0.0, 0.0, 0.0};
	float v3[]={0.0, 0.0, 0.0};
	float v4[]={0.0, 0.0, 0.0};
	float v5[]={0.0, 0.0, 0.0};

	float angulo=2*3.14/resolucion;

	//float ctext_s = 1/resolucion-1;
	float ctext_s = 1.0/resolucion;
	float ctext_t = 0.0;

	
	for(int i=0; i <resolucion; i++)
	{
		 
		v2[0]=radio*cos(angulo*i);
		v2[1]=0;
		v2[2]=radio*sin(angulo*i);

		v3[0]=radio*cos(angulo*(i+1));
		v3[1]=0;
		v3[2]=radio*sin(angulo*(i+1));
	
		v4[0]=radio*cos(angulo*i);
		v4[1]=altura;
		v4[2]=radio*sin(angulo*i);

		v5[0]=radio*cos(angulo*(i+1));
		v5[1]=altura;
		v5[2]=radio*sin(angulo*(i+1));

		glBegin(GL_POLYGON);
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glVertex3f(0.0,0.0,0.0);
			glVertex3fv(v2);
			glVertex3fv(v3);
		glEnd();

		glBegin(GL_POLYGON);
			glNormal3f( 0.0f, 1.0f, 0.0f);
			glVertex3f(0.0,altura,0.0);
			glVertex3fv(v4);
			glVertex3fv(v5);
		glEnd();

		glBindTexture(GL_TEXTURE_2D, text);
		glBegin(GL_POLYGON);
			glNormal3f( v2[0], 0.0f, v2[2]);
			glTexCoord2f(ctext_s*i, 0.0f);		glVertex3fv(v2);
			glTexCoord2f(ctext_s*(i+1), 0.0f);	glVertex3fv(v3);
			glTexCoord2f(ctext_s*(i+1), 1.0f);	glVertex3fv(v5);
			glTexCoord2f(ctext_s*i, 1.0f);		glVertex3fv(v4);
		glEnd();
	}
}	

void CFiguras::tecla (float altura, float largo, float profundidad, GLuint text)
{

	GLfloat vertice [8][3] = {
				{0.5*largo ,-0.5*altura, 0.5*profundidad},    //Coordenadas Vértice 1 V1
				{-0.5*largo ,-0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 2 V2
				{-0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 3 V3
				{0.5*largo ,-0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 4 V4
				{0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 5 V5
				{0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 6 V6
				{-0.5*largo ,0.5*altura , -0.5*profundidad},    //Coordenadas Vértice 7 V7
				{-0.5*largo ,0.5*altura , 0.5*profundidad},    //Coordenadas Vértice 8 V8
				};

		glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
		glBegin(GL_POLYGON);	//Front
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( 0.0f, 0.0f, -1.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
			//glColor3f(0.0,0.0,1.0);
			glNormal3f( -1.0f, 0.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
			//glColor3f(0.0,1.0,0.0);
			glNormal3f( 0.0f, 0.0f,1.0f);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
			//glColor3f(1.0,1.0,1.0);
			glNormal3f(1.0f, 0.0f, 0.0f);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
			//glColor3f(0.4,0.2,0.6);
			glNormal3f( 0.0f,1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
			glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
			glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
			glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
			//glColor3f(0.8,0.2,0.4);
			glNormal3f( 0.0f, -1.0f, 0.0f);
			glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[7]);
			glTexCoord2f(10.0f, 0.0f); glVertex3fv(vertice[6]);
			glTexCoord2f(10.0f, 10.0f); glVertex3fv(vertice[5]);
			glTexCoord2f(0.0f, 10.0f); glVertex3fv(vertice[4]);
		glEnd();

}

void CFiguras::prisma_m1(float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
				{0.5 * largo ,-0.5 * altura, 0.5 * profundidad},    //Coordenadas Vértice 1 V1
				{-0.5 * largo ,-0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 2 V2
				{-0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 3 V3
				{0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 4 V4
				{0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 5 V5
				{0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 6 V6
				{-0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 7 V7
				{-0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.53f, 0.075f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.55f, 0.45f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.01f, 0.45f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.05f, 0.075f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.59f, 0.025f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.97f, 0.02f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.985f, 0.46f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.56f, 0.45f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.985f, 0.985f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.55f, 0.985f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.6f, 0.51f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.98f, 0.51f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.59f, 0.025f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.56f, 0.45f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.985f, 0.46f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.97f, 0.02f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void CFiguras::prisma_m2(float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
				{0.5 * largo ,-0.5 * altura, 0.5 * profundidad},    //Coordenadas Vértice 1 V1
				{-0.5 * largo ,-0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 2 V2
				{-0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 3 V3
				{0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 4 V4
				{0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 5 V5
				{0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 6 V6
				{-0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 7 V7
				{-0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.55f, 0.45f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.55f, 0.49f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.04f, 0.49f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.04f, 0.45f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.592f, 0.47f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.99f, 0.47f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.99f, 0.5f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.592f, 0.5f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.04f, 0.49f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.55f, 0.49f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.55f, 0.45f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.04f, 0.45f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_QUADS);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.592f, 0.47f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.99f, 0.47f);  glVertex3fv(vertice[1]);
	glTexCoord2f(0.99f, 0.5f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.592f, 0.5f); glVertex3fv(vertice[6]);

	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.55f, 0.51f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.55f, 0.9f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.05f, 0.9f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.05f, 0.51f); glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();


}

void CFiguras::prisma_e1(float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
				{0.5 * largo ,-0.5 * altura, 0.5 * profundidad},    //Coordenadas Vértice 1 V1
				{-0.5 * largo ,-0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 2 V2
				{-0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 3 V3
				{0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 4 V4
				{0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 5 V5
				{0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 6 V6
				{-0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 7 V7
				{-0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.908f, 0.34f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.96f, 0.9345f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.616f, 0.936f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.645f, 0.345f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.37f, 0.43f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.51f, 0.42f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.54f, 0.958f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.36f, 0.962f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.29f, 0.94f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.035f, 0.945f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.06f, 0.39f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.28f, 0.38f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.51f, 0.42f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.54f, 0.958f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.36f, 0.962f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.37f, 0.43f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.97f, 0.045f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.97f, 0.27f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.565f, 0.28f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.565f, 0.04f); glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.97f, 0.045f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.565f, 0.04f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.565f, 0.28f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.97f, 0.27f); glVertex3fv(vertice[3]);
	glEnd();


}

void CFiguras::prisma_e2(float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{
	GLfloat vertice[8][3] = {
			{0.5 * largo ,-0.5 * altura, 0.5 * profundidad},    //Coordenadas Vértice 1 V1
			{-0.5 * largo ,-0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 2 V2
			{-0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 3 V3
			{0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 4 V4
			{0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 5 V5
			{0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 6 V6
			{-0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 7 V7
			{-0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.3015f, 0.015f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.334f, 0.665f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.0275f, 0.69f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.048f, 0.048); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.367f, 0.16f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.593f, 0.16f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.652f, 0.978f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.367f, 0.957f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.97f, 0.953f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.69f, 0.962f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.73f, 0.242f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.96f, 0.219f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_QUADS);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.367f, 0.16f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.593f, 0.16f);  glVertex3fv(vertice[1]);
	glTexCoord2f(0.652f, 0.978f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.367f, 0.957f); glVertex3fv(vertice[6]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.33f, 0.718f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.33f, 0.982f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.01f, 0.992f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.005f, 0.73f); glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.33f, 0.718f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.005f, 0.73f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.01f, 0.992f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.33f, 0.982f); glVertex3fv(vertice[3]);
	glEnd();


}

void CFiguras::prisma_e3(float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
				{0.5 * largo ,-0.5 * altura, 0.5 * profundidad},    //Coordenadas Vértice 1 V1
				{-0.5 * largo ,-0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 2 V2
				{-0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 3 V3
				{0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 4 V4
				{0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 5 V5
				{0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 6 V6
				{-0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 7 V7
				{-0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.863f, 0.525f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.908f, 0.964f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.447f, 0.978f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.465f, 0.527f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.45f, 0.025f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.619f, 0.019f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.63f, 0.4f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.443f, 0.41f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.98f, 0.39f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.692f, 0.388f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.686f, 0.054f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.958f, 0.052f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.619f, 0.019f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.63f, 0.4f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.443f, 0.41f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.45f, 0.025f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.363f, 0.212f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.361f, 0.494f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.023f, 0.496f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.023f, 0.216f); glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.363f, 0.212f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.023f, 0.216f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.023f, 0.496f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.361f, 0.494f); glVertex3fv(vertice[3]);
	glEnd();
}

void CFiguras::prisma_e4(float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
				{0.5 * largo ,-0.5 * altura, 0.5 * profundidad},    //Coordenadas Vértice 1 V1
				{-0.5 * largo ,-0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 2 V2
				{-0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 3 V3
				{0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 4 V4
				{0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 5 V5
				{0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 6 V6
				{-0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 7 V7
				{-0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.376f, 0.54f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.433f, 0.975f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.016f, 0.965f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0165f, 0.525f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.45f, 0.025f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.619f, 0.019f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.63f, 0.4f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.443f, 0.41f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.98f, 0.39f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.692f, 0.388f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.686f, 0.054f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.958f, 0.052f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.619f, 0.019f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.63f, 0.4f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.443f, 0.41f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.45f, 0.025f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.363f, 0.212f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.361f, 0.494f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.023f, 0.496f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.023f, 0.216f); glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.363f, 0.212f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.023f, 0.216f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.023f, 0.496f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.361f, 0.494f); glVertex3fv(vertice[3]);
	glEnd();
}

void CFiguras::prisma_estufa(float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{
	GLfloat vertice[14][3] = {
			{0.5 * largo, -0.5 * altura, 0.5 * profundidad},    //Coordenadas Vértice 1 V1
			{-0.5 * largo, -0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 2 V2
			{-0.5 * largo, -0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 3 V3
			{0.5 * largo, -0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 4 V4
			{0.5 * largo, 0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 5 V5
			{0.5 * largo, 0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 6 V6
			{-0.5 * largo, 0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 7 V7
			{-0.5 * largo, 0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 8 V8
			{-0.5 * largo, 0.625 * altura , -0.5 * profundidad},    //Coordenadas Vértice 9 V9
			{0.5 * largo, 0.625 * altura , -0.5 * profundidad},    //Coordenadas Vértice 10 V10
			{0.5 * largo, 0.625 * altura , -0.375 * profundidad},    //Coordenadas Vértice 11 V11
			{-0.5 * largo, 0.625 * altura , -0.375 * profundidad},    //Coordenadas Vértice 12 V12
			{-0.5 * largo, 0.5 * altura , -0.375 * profundidad},    //Coordenadas Vértice 13 V13
			{0.5 * largo, 0.5 * altura , -0.375 * profundidad}    //Coordenadas Vértice 14 V14
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.47f, 0.068f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.52f, 0.462f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.03f, 0.45f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.03f, 0.056f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.875f, 0.52f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.59f, 0.52f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.58f, 0.88f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.885f, 0.86f);  glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.98f, 0.4f); glVertex3fv(vertice[8]);
	glTexCoord2f(0.58f, 0.41f); glVertex3fv(vertice[9]);
	glTexCoord2f(0.568f, 0.013f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.92f, 0.013f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.875f, 0.52f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.885f, 0.86f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.58f, 0.88f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.59f, 0.52f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.52f, 0.52f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.517f, 0.96f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.017f, 0.965f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.013f, 0.52f); glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);	//Front_p
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.98, 0.975f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.99f, 0.458f); glVertex3fv(vertice[10]);
	glTexCoord2f(0.886f, 0.458f); glVertex3fv(vertice[13]);
	glTexCoord2f(0.886f, 0.965f); glVertex3fv(vertice[12]);
	glEnd();

	glBegin(GL_POLYGON);	//Right_p
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.579f, 0.992f); glVertex3fv(vertice[10]);
	glTexCoord2f(0.566f, 0.992f); glVertex3fv(vertice[9]);
	glTexCoord2f(0.566f, 0.89f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.59f, 0.886f); glVertex3fv(vertice[13]);
	glEnd();

	glBegin(GL_POLYGON);  //Left_p
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.566f, 0.992f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.579f, 0.992f); glVertex3fv(vertice[8]);
	glTexCoord2f(0.59f, 0.886f);  glVertex3fv(vertice[6]);
	glTexCoord2f(0.566f, 0.89f); glVertex3fv(vertice[12]);
	glEnd();

	glBegin(GL_POLYGON);  //Top_p
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.992f); glVertex3fv(vertice[8]);
	glTexCoord2f(0.0f, 0.995f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.54f, 0.951f); glVertex3fv(vertice[10]);
	glTexCoord2f(0.54f, 0.98f); glVertex3fv(vertice[9]);
	glEnd();
}

void CFiguras::prisma_fregadero(float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice[14][3] = {
				{0.5 * largo, -0.5 * altura, 0.5 * profundidad},    //Coordenadas Vértice 1 V1
				{-0.5 * largo, -0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 2 V2
				{-0.5 * largo, -0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 3 V3
				{0.5 * largo, -0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 4 V4
				{0.5 * largo, 0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 5 V5
				{0.5 * largo, 0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 6 V6
				{-0.5 * largo, 0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 7 V7
				{-0.5 * largo, 0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 8 V8
				{-0.5 * largo, 0.95 * altura , -0.5 * profundidad},    //Coordenadas Vértice 9 V9
				{0.5 * largo, 0.95 * altura , -0.5 * profundidad},    //Coordenadas Vértice 10 V10
				{0.5 * largo, 0.95 * altura , -0.375 * profundidad},    //Coordenadas Vértice 11 V11
				{-0.5 * largo, 0.95 * altura , -0.375 * profundidad},    //Coordenadas Vértice 12 V12
				{-0.5 * largo, 0.5 * altura , -0.375 * profundidad},    //Coordenadas Vértice 13 V13
				{0.5 * largo, 0.5 * altura , -0.375 * profundidad}    //Coordenadas Vértice 14 V14
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.408f, 0.375f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.43f, 0.63f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.01f, 0.638f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.03f, 0.38f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.472f, 0.335f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.765f, 0.332f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.792f, 0.646f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.462f, 0.646f);  glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.968f, 0.97f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.513f, 0.97f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.541f, 0.7f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.929f, 0.7f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.765f, 0.332f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.792f, 0.646f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.462f, 0.646f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.472f, 0.335f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.5f, 0.68f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.5f, 0.99f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 0.992f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.68f); glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);	//Front_p
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.027, 0.343f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.343f, 0.34f); glVertex3fv(vertice[10]);
	glTexCoord2f(0.343f, 0.205f); glVertex3fv(vertice[13]);
	glTexCoord2f(0.04f, 0.205f); glVertex3fv(vertice[12]);
	glEnd();

	glBegin(GL_POLYGON);	//Right_p
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.96f, 0.537f); glVertex3fv(vertice[10]);
	glTexCoord2f(0.988f, 0.53f); glVertex3fv(vertice[9]);
	glTexCoord2f(0.974f, 0.359f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.953f, 0.353f); glVertex3fv(vertice[13]);
	glEnd();

	glBegin(GL_POLYGON);  //Left_p
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.988f, 0.53f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.96f, 0.537f); glVertex3fv(vertice[8]);
	glTexCoord2f(0.953f, 0.353f);  glVertex3fv(vertice[6]);
	glTexCoord2f(0.974f, 0.359f); glVertex3fv(vertice[12]);
	glEnd();

	glBegin(GL_POLYGON);	//Back_p
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.382f, 0.289f); glVertex3fv(vertice[8]);
	glTexCoord2f(0.4f, 0.017f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.728f, 0.02f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.759f, 0.271f); glVertex3fv(vertice[9]);
	glEnd();

	glBegin(GL_POLYGON);  //Top_p
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(0.83f, 0.62f); glVertex3fv(vertice[8]);
	glTexCoord2f(0.81f, 0.3f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.8f, 0.171f); glVertex3fv(vertice[10]);
	glTexCoord2f(0.83f, 0.171f); glVertex3fv(vertice[9]);
	glEnd();
}

void CFiguras::prisma_madera(float altura, float largo, float profundidad, GLuint text)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
				{0.5 * largo ,-0.5 * altura, 0.5 * profundidad},    //Coordenadas Vértice 1 V1
				{-0.5 * largo ,-0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 2 V2
				{-0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 3 V3
				{0.5 * largo ,-0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 4 V4
				{0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 5 V5
				{0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 6 V6
				{-0.5 * largo ,0.5 * altura , -0.5 * profundidad},    //Coordenadas Vértice 7 V7
				{-0.5 * largo ,0.5 * altura , 0.5 * profundidad},    //Coordenadas Vértice 8 V8
	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use.
	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(1.0f, 0.37f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.50f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.0f, 0.50f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 0.37f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.37f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.37f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 0.50f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 0.50f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(1.0f, 0.50f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.50f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 0.37f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 0.37f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(1.0f, 0.37f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 0.50f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 0.50f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.37f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Top
	glNormal3f(0.0f, 1.0f, 0.0f);
	glTexCoord2f(1.0f, 0.37f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f, 0.50f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 0.50f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 0.37f); glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(1.0f, 0.37f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 0.37f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.0f, 0.50f); glVertex3fv(vertice[2]);
	glTexCoord2f(1.0f, 0.50f); glVertex3fv(vertice[3]);
	glEnd();


}

void CFiguras::prisma_r(GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice[8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
	};


	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use. Cara blanca
	glBegin(GL_POLYGON);	//Front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
	glEnd();

	glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use. Cara con textura
	glBegin(GL_POLYGON);	//Right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);  //Bottom
	glNormal3f(0.0f, -1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
	glEnd();



}

void CFiguras::prisma_R(GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice[14][3] = {
				{0.5 ,-0.5, 0.5},	//Coordenadas Vértice A
				{-0.5 ,-0.5, 0.5},	//Coordenadas Vértice B
				{-0.5 ,-0.5, -0.5},	//Coordenadas Vértice C
				{0.5 ,-0.5, -0.5},	//Coordenadas Vértice D
				{0.5 ,0.5, 0.5},	//Coordenadas Vértice E
				{0.5 ,0.5, -0.5},	//Coordenadas Vértice F
				{-0.5 ,0.5, -0.5},  //Coordenadas Vértice G
				{-0.5 ,0.5, 0.5},   //Coordenadas Vértice H
				{-0.5, -0.25 ,0.5},	//Coordenadas Vértice I
				{-0.25, 0.25, 0.5},	//Coordenadas Vértice J
				{0.25, 0.5, 0.5},	//Coordenadas Vértice K
				{-0.5, -0.25 ,-0.5}, //Coordenadas Vértice L
				{-0.25, 0.25, -0.5},//Coordenadas Vértice M
				{0.25, 0.5, -0.5},	//Coordenadas Vértice N
	};

	glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use. Cara con textura
	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[8]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[9]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[8]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[12]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[10]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[13]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[12]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[9]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[13]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[10]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);// cara_tracera
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.0f, 0.25f); glVertex3fv(vertice[8]);
	glTexCoord2f(0.25f, 0.75f); glVertex3fv(vertice[9]);
	glTexCoord2f(0.75f, 1.0f); glVertex3fv(vertice[10]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);// cara_frontal
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 0.25f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.25f, 0.75f); glVertex3fv(vertice[12]);
	glTexCoord2f(0.75f, 1.0f); glVertex3fv(vertice[13]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[5]);
	glEnd();
}

void CFiguras::prisma_RR(GLuint text, GLuint text2)  //Funcion creacion prisma
{

	GLfloat vertice[50][3] = {
				{-0.5 ,-0.5, 0.125},
				{-0.5 ,-0.5, -0.125},
				{-0.5 ,-0.625, -0.25},
				{-0.5 ,-0.875, -0.25},
				{-0.5 ,-1.0, -0.125},
				{-0.5 ,-1.0, 0.125},
				{-0.5 ,-0.875, 0.25},
				{-0.5 ,-0.625, 0.25},
				{-0.5 ,-0.5, 0.5},
				{-0.25 ,-0.375, 1.0},
				{0.25 ,-0.25, 1.25},
				{0.5 ,-0.25, 1.25},
				{-0.5 ,-1.0, 0.5},
				{-0.25 ,-1.125, 1.0},
				{0.25 ,-1.25, 1.25},
				{0.5 ,-1.25, 1.25},
				{-0.5 ,-1.25, 0.25},//16
				{-0.25 ,-1.75, 0.375},
				{0.25 ,-2.0, 0.5},
				{0.5 ,-2.0, 0.5},
				{-0.5 ,-1.25, -0.25},//20
				{-0.25 ,-1.75, -0.375},
				{0.25 ,-2.0, -0.5},
				{0.5 ,-2.0, -0.5},
				{-0.5 ,-1.0, -0.5},//24
				{-0.25 ,-1.125, -1.0},
				{0.25 ,-1.25, -1.25},
				{0.5 ,-1.25, -1.25},
				{-0.5 ,-0.5, -0.5},//28
				{-0.25 ,-0.375, -1.0},
				{0.25 ,-0.25, -1.25},
				{0.5 ,-0.25, -1.25},
				{-0.5 ,-0.25, -0.25},//32
				{-0.25 ,0.25, -0.375},
				{0.25 ,0.5, -0.5},
				{0.5 ,0.5, -0.5},
				{-0.5 ,-0.25, 0.25},//36
				{-0.25 ,0.25, 0.375},
				{0.25,0.5, 0.5},
				{0.5, 0.5, 0.5},
				{-0.5 ,-0.75, 0.5},////R40
				{-0.25 ,-0.75, 1.0},//P41
				{0.25 ,-0.75, 1.25},//S42
				{0.5 ,-0.75, 1.25}//X43


	};

	glBindTexture(GL_TEXTURE_2D, text);   // choose the texture to use. Cara con textura

	glBegin(GL_POLYGON);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[7]);
	glEnd();
	/////1
	glBegin(GL_QUADS);
	glTexCoord2f(0.125f, 1.0f); glVertex3fv(vertice[7]);
	glTexCoord2f(0.125f, 0.75f); glVertex3fv(vertice[8]);
	glTexCoord2f(0.0f, 0.75f); glVertex3fv(vertice[12]);
	glTexCoord2f(0.0f, 1.0f); glVertex3fv(vertice[6]);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glTexCoord2f(0.0625f, 0.75f); glVertex3fv(vertice[40]);
	glTexCoord2f(0.0625f, 0.75f); glVertex3fv(vertice[9]);
	glTexCoord2f(0.125f, 0.75f); glVertex3fv(vertice[8]);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glTexCoord2f(0.125f, 0.75f); glVertex3fv(vertice[40]);
	glTexCoord2f(0.0f, 0.75f); glVertex3fv(vertice[13]);
	glTexCoord2f(0.0f, 0.5f); glVertex3fv(vertice[12]);
	glEnd();

	///2
	glBegin(GL_QUADS);
	glTexCoord2f(0.25f, 1.0f); glVertex3fv(vertice[6]);
	glTexCoord2f(0.25f, 0.75f); glVertex3fv(vertice[12]);
	glTexCoord2f(0.125f, 0.75f); glVertex3fv(vertice[16]);
	glTexCoord2f(0.125f, 1.0f); glVertex3fv(vertice[5]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.25f, 0.75f); glVertex3fv(vertice[12]);
	glTexCoord2f(0.25f, 0.5f); glVertex3fv(vertice[13]);
	glTexCoord2f(0.125f, 0.5f); glVertex3fv(vertice[17]);
	glTexCoord2f(0.125f, 0.75f); glVertex3fv(vertice[16]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.25f, 0.5f); glVertex3fv(vertice[13]);
	glTexCoord2f(0.25f, 0.25f); glVertex3fv(vertice[14]);
	glTexCoord2f(0.125f, 0.25f); glVertex3fv(vertice[18]);
	glTexCoord2f(0.125f, 0.5f); glVertex3fv(vertice[17]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.25f, 0.25f); glVertex3fv(vertice[14]);
	glTexCoord2f(0.25f, 0.0f); glVertex3fv(vertice[15]);
	glTexCoord2f(0.125f, 0.0f); glVertex3fv(vertice[19]);
	glTexCoord2f(0.125f, 0.25f); glVertex3fv(vertice[18]);
	glEnd();

	///3
	glBegin(GL_QUADS);
	glTexCoord2f(0.375f, 1.0f); glVertex3fv(vertice[5]);
	glTexCoord2f(0.375f, 0.75f); glVertex3fv(vertice[16]);
	glTexCoord2f(0.25f, 0.75f); glVertex3fv(vertice[20]);
	glTexCoord2f(0.25f, 1.0f); glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.375f, 0.75f); glVertex3fv(vertice[16]);
	glTexCoord2f(0.375f, 0.5f); glVertex3fv(vertice[17]);
	glTexCoord2f(0.25f, 0.05f); glVertex3fv(vertice[21]);
	glTexCoord2f(0.025f, 0.75f); glVertex3fv(vertice[20]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.375f, 0.5f); glVertex3fv(vertice[17]);
	glTexCoord2f(0.375f, 0.25f); glVertex3fv(vertice[18]);
	glTexCoord2f(0.25f, 0.25f); glVertex3fv(vertice[22]);
	glTexCoord2f(0.25f, 0.5f); glVertex3fv(vertice[21]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.375f, 0.25f); glVertex3fv(vertice[18]);
	glTexCoord2f(0.375f, 0.0f); glVertex3fv(vertice[19]);
	glTexCoord2f(0.25f, 0.0f); glVertex3fv(vertice[23]);
	glTexCoord2f(0.25f, 0.25f); glVertex3fv(vertice[22]);
	glEnd();

	///4
	glBegin(GL_QUADS);
	glTexCoord2f(0.5f, 1.0f); glVertex3fv(vertice[4]);
	glTexCoord2f(0.5f, 0.75f); glVertex3fv(vertice[20]);
	glTexCoord2f(0.375f, 0.75f); glVertex3fv(vertice[24]);
	glTexCoord2f(0.375f, 1.0f); glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.5f, 0.75f); glVertex3fv(vertice[20]);
	glTexCoord2f(0.5f, 0.5f); glVertex3fv(vertice[21]);
	glTexCoord2f(0.375f, 0.5f); glVertex3fv(vertice[25]);
	glTexCoord2f(0.375f, 0.75f); glVertex3fv(vertice[24]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.5f, 0.5f); glVertex3fv(vertice[21]);
	glTexCoord2f(0.5f, 0.25f); glVertex3fv(vertice[22]);
	glTexCoord2f(0.375f, 0.25f); glVertex3fv(vertice[26]);
	glTexCoord2f(0.375f, 0.5f); glVertex3fv(vertice[25]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.5f, 0.25f); glVertex3fv(vertice[22]);
	glTexCoord2f(0.5f, 0.0f); glVertex3fv(vertice[23]);
	glTexCoord2f(0.375f, 0.0f); glVertex3fv(vertice[27]);
	glTexCoord2f(0.375f, 0.25f); glVertex3fv(vertice[26]);
	glEnd();

	/////5
	glBegin(GL_QUADS);
	glTexCoord2f(0.625f, 1.0f); glVertex3fv(vertice[3]);
	glTexCoord2f(0.625f, 0.75f); glVertex3fv(vertice[24]);
	glTexCoord2f(0.5f, 0.75f); glVertex3fv(vertice[28]);
	glTexCoord2f(0.5f, 1.0f); glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.625f, 0.75f); glVertex3fv(vertice[24]);
	glTexCoord2f(0.625f, 0.5f); glVertex3fv(vertice[25]);
	glTexCoord2f(0.5f, 0.5f); glVertex3fv(vertice[29]);
	glTexCoord2f(0.5f, 0.75f); glVertex3fv(vertice[28]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.625f, 0.5f); glVertex3fv(vertice[25]);
	glTexCoord2f(0.625f, 0.25f); glVertex3fv(vertice[26]);
	glTexCoord2f(0.5f, 0.25f); glVertex3fv(vertice[30]);
	glTexCoord2f(0.5f, 0.5f); glVertex3fv(vertice[29]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.625f, 0.25f); glVertex3fv(vertice[26]);
	glTexCoord2f(0.625f, 0.0f); glVertex3fv(vertice[27]);
	glTexCoord2f(0.5f, 0.0f); glVertex3fv(vertice[31]);
	glTexCoord2f(0.5f, 0.25f); glVertex3fv(vertice[30]);
	glEnd();

	///6
	glBegin(GL_QUADS);
	glTexCoord2f(0.75f, 1.0f); glVertex3fv(vertice[2]);
	glTexCoord2f(0.75f, 0.75f); glVertex3fv(vertice[28]);
	glTexCoord2f(0.625f, 0.75f); glVertex3fv(vertice[32]);
	glTexCoord2f(0.625f, 1.0f); glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.75f, 0.75f); glVertex3fv(vertice[28]);
	glTexCoord2f(0.75f, 0.5f); glVertex3fv(vertice[29]);
	glTexCoord2f(0.625f, 0.5f); glVertex3fv(vertice[33]);
	glTexCoord2f(0.625f, 0.75f); glVertex3fv(vertice[32]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.75f, 0.5f); glVertex3fv(vertice[29]);
	glTexCoord2f(0.75f, 0.25f); glVertex3fv(vertice[30]);
	glTexCoord2f(0.625f, 0.25f); glVertex3fv(vertice[34]);
	glTexCoord2f(0.625f, 0.5f); glVertex3fv(vertice[33]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.75f, 0.25f); glVertex3fv(vertice[30]);
	glTexCoord2f(0.75f, 0.0f); glVertex3fv(vertice[31]);
	glTexCoord2f(0.625f, 0.0f); glVertex3fv(vertice[35]);
	glTexCoord2f(0.625f, 0.25f); glVertex3fv(vertice[34]);
	glEnd();

	////7
	glBegin(GL_QUADS);
	glTexCoord2f(0.875f, 1.0f); glVertex3fv(vertice[1]);
	glTexCoord2f(0.875f, 0.75f); glVertex3fv(vertice[32]);
	glTexCoord2f(0.75f, 0.75f); glVertex3fv(vertice[36]);
	glTexCoord2f(0.75f, 1.0f); glVertex3fv(vertice[0]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.875f, 0.75f); glVertex3fv(vertice[32]);
	glTexCoord2f(0.875f, 0.5f); glVertex3fv(vertice[33]);
	glTexCoord2f(0.75f, 0.5f); glVertex3fv(vertice[37]);
	glTexCoord2f(0.75f, 0.75f); glVertex3fv(vertice[36]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.875f, 0.5f); glVertex3fv(vertice[33]);
	glTexCoord2f(0.875f, 0.25f); glVertex3fv(vertice[34]);
	glTexCoord2f(0.75f, 0.25f); glVertex3fv(vertice[38]);
	glTexCoord2f(0.75f, 0.5f); glVertex3fv(vertice[37]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(0.875f, 0.25f); glVertex3fv(vertice[34]);
	glTexCoord2f(0.875f, 0.0f); glVertex3fv(vertice[35]);
	glTexCoord2f(0.75f, 0.0f); glVertex3fv(vertice[39]);
	glTexCoord2f(0.75f, 0.25f); glVertex3fv(vertice[38]);
	glEnd();

	///8
	glBegin(GL_QUADS);
	glTexCoord2f(1.0f, 1.0f); glVertex3fv(vertice[0]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[36]);
	glTexCoord2f(0.875f, 0.75f); glVertex3fv(vertice[8]);
	glTexCoord2f(0.875f, 1.75f); glVertex3fv(vertice[7]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(1.0f, 0.75f); glVertex3fv(vertice[36]);
	glTexCoord2f(1.0f, 0.5f); glVertex3fv(vertice[37]);
	glTexCoord2f(0.875f, 0.5f); glVertex3fv(vertice[9]);
	glTexCoord2f(0.875f, 0.75f); glVertex3fv(vertice[8]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(1.0f, 0.5f); glVertex3fv(vertice[37]);
	glTexCoord2f(1.0f, 0.25f); glVertex3fv(vertice[38]);
	glTexCoord2f(0.875f, 0.25f); glVertex3fv(vertice[10]);
	glTexCoord2f(0.875f, 0.5f); glVertex3fv(vertice[9]);
	glEnd();

	glBegin(GL_QUADS);
	glTexCoord2f(1.0f, 0.25f); glVertex3fv(vertice[38]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[39]);
	glTexCoord2f(0.875f, 0.0f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.875f, 0.25f); glVertex3fv(vertice[10]);
	glEnd();
	///Puerta_horno
	glBindTexture(GL_TEXTURE_2D, text2);   // choose the texture to use.
	glBegin(GL_TRIANGLE_FAN);
	glTexCoord2f(0.5f, 1.0f); glVertex3fv(vertice[40]);
	glTexCoord2f(1.0f, 0.8f); glVertex3fv(vertice[9]);
	glTexCoord2f(0.5f, 0.66f); glVertex3fv(vertice[41]);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(1.0f, 0.66f); glVertex3fv(vertice[9]);
	glTexCoord2f(1.0f, 0.33f); glVertex3fv(vertice[10]);
	glTexCoord2f(0.5f, 0.33f); glVertex3fv(vertice[42]);
	glTexCoord2f(0.5f, 0.66f); glVertex3fv(vertice[41]);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(1.0f, 0.33f); glVertex3fv(vertice[10]);
	glTexCoord2f(1.0f, 0.0f); glVertex3fv(vertice[11]);
	glTexCoord2f(0.5f, 0.0f); glVertex3fv(vertice[43]);
	glTexCoord2f(0.5f, 0.33f); glVertex3fv(vertice[42]);
	glEnd();

	glBegin(GL_TRIANGLE_FAN);
	glTexCoord2f(0.5f, 1.0f); glVertex3fv(vertice[40]);
	glTexCoord2f(0.5f, 0.66f); glVertex3fv(vertice[41]);
	glTexCoord2f(0.0f, 0.8f); glVertex3fv(vertice[13]);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.5f, 0.66f); glVertex3fv(vertice[41]);
	glTexCoord2f(0.5f, 0.33f); glVertex3fv(vertice[42]);
	glTexCoord2f(0.0f, 0.33f); glVertex3fv(vertice[14]);
	glTexCoord2f(0.0f, 0.66f); glVertex3fv(vertice[13]);
	glEnd();

	glBegin(GL_POLYGON);
	glTexCoord2f(0.5f, 0.33f); glVertex3fv(vertice[42]);
	glTexCoord2f(0.5f, 0.0f); glVertex3fv(vertice[43]);
	glTexCoord2f(0.0f, 0.0f); glVertex3fv(vertice[15]);
	glTexCoord2f(0.0f, 0.33f); glVertex3fv(vertice[14]);
	glEnd();
}
