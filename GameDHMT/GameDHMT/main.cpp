//Chau Van Hung 
//DoHoaMayTinh
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"

const int screenWidth = 640;
const int screenHeight = 480;
//const int screenWidth = 250;//bai 13
//const int screenHeight = 250;//bai 13

//bai 1-lap1
/*

void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(5.0);

	glBegin(GL_POINTS);
	glVertex3f(200.0, 120.0, 0.0);
	glVertex3f(440.0, 120.0, 0.0);
	glVertex3f(440.0, 360.0, 0.0);
	glVertex3f(200.0, 360.0, 0.0);
	glEnd();
	glFlush();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Point");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutMainLoop();
	return 0;
}*/


//bai 2 - lap 1
/* 
void Init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);///clear black 
	glShadeModel(GL_FLAT); 
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_TRIANGLES);
	glVertex2i(160, 80);
	glVertex2i(480, 80);
	glVertex2i(320, 400);
	glEnd();

	glFlush();
}

void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);// Khoi tao glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // khoi tao che do ve single buffer va he mau RBG
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100);//optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape); 
	glutMainLoop();
	return 0;

}*/

//bai 3 lap 1
/*
void Init(void)
{	glClearColor(1.0, 1.0, 1.0, 1.0); // clear white
	glShadeModel(GL_FLAT); 
}

void Triangle()
{
		//To mau 
	glBegin(GL_TRIANGLES);
			glColor3f(1.0, 0.0, 0.0); //mau do
			glVertex2i(50, 50);
			glVertex2i(250, 50);
			glVertex2i(150, 250);
	glEnd();
} 

void Display() 
{
	glClear(GL_COLOR_BUFFER_BIT);
	Triangle(); 
	glFlush();
}

void Reshape(int w, int h) // reshap dung cho bai 3 va 4 
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);// Khoi tao glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // khoi tao che do ve single buffer va he mau RBG
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100);//optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;

}           */


//bai 4 lap 1
/*
void Init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0); // clear white
	
}

void Triangle()
{
	//To mau
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(160, 80);
	glColor3f(0.0, 1.0, 0.0);
	glVertex2i(480, 80);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2i(320, 400);
	glEnd();

}

void Display() 
{
	glClear(GL_COLOR_BUFFER_BIT);
	Triangle();  
	glFlush();
}

void Reshape(int w, int h) // reshap dung cho bai 3 va 4 
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);// Khoi tao glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // khoi tao che do ve single buffer va he mau RBG
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100);//optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;

}
*/

//bai 5 lap 1
/*
void Init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0); // clear black

}

void DrawSquare(GLint x, GLint y, GLint a)
{
	glBegin(GL_POLYGON);
	glVertex2i(x, y);
	glVertex2i(x + a, y);
	glVertex2i(x + a, y + a);
	glVertex2i(x, y + a);

	glEnd();

}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	GLint size = 200; // do dai canh = 200
	GLint x = (screenWidth - size) / 2; //canh theo vao giua x 
	GLint y = (screenHeight - size) / 2; // canh theo vao giua y
	DrawSquare(x, y, size);

	glFlush();
}
void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);// Khoi tao glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // khoi tao che do ve single buffer va he mau RBG
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100);//optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;

}
*/

// bai 6 lap 1

/*
void Init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0); // clear black

}

void DrawRectangle(GLint x, GLint y, GLint width, GLint height)
{
	glBegin(GL_POLYGON);
	glVertex2i(x, y);
	glVertex2i(x + width, y);
	glVertex2i(x + width, y + height);
	glVertex2i(x, y + height);
	glEnd();


}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	GLint w = 400, h = 200; // width = 400, height = 200
	GLint x = (screenWidth - w) / 2; // canh vao giua man hinh
	GLint y = (screenHeight - h) / 2;
	DrawRectangle(x, y, w, h);

	glFlush();

}

void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);// Khoi tao glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // khoi tao che do ve single buffer va he mau RBG
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100);//optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;

}
*/
//bai 7 lap 1
/*
void Init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0); // clear black

}

void DrawRectangle(GLint x, GLint y, GLint width, GLint height)
{
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 0.0f, 1.0f); // dinh mau hong
	glVertex2i(x, y);
	glColor3f(0.0f, 1.0f, 1.0f);// dinh mau xanh da troi
	glVertex2i(x + width, y);
	glColor3f(1.0f, 1.0f, 0.0f);// dinh mau vang
	glVertex2i(x + width, y + height);
	glColor3f(1.0f, 1.0f, 1.0f);// dinh mau trang
	glVertex2i(x, y + height);
	glEnd();


}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	GLint w = 400, h = 200; // width = 400, height = 200
	GLint x = (screenWidth - w) / 2; // canh vao giua man hinh
	GLint y = (screenHeight - h) / 2;
	DrawRectangle(x, y, w, h);

	glFlush();

}

void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);// Khoi tao glut
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA); // khoi tao che do ve single buffer va he mau RBG
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100);//optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;

}
*/

//bai 8 lap 1
/*
void Init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);//clear white
	glShadeModel(GL_FLAT);
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT); //Clear the color buffer
	glColor3f(0.0, 0.0, 0.0); //black
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_TRIANGLES);
			glVertex2i(50, 50);   //v0
			glVertex2i(200, 50);  //v1
			glVertex2i(100, 150); //v2

			glVertex2i(300, 100);  //v3
			glVertex2i(450, 150);  //v4
			glVertex2i(350, 250);  //v5

	glEnd();

	glFlush();
}

void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100); //optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;

}*/

//bai 8.2 -lap 1
/*
void Init(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);//clear white
	glShadeModel(GL_FLAT);
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT); //Clear the color buffer
	glColor3f(0.0, 0.0, 0.0); //black
	glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

	glBegin(GL_TRIANGLE_STRIP);
	glVertex2i(50, 50);   //v0
	glVertex2i(100, 150);  //v1
	glVertex2i(200, 50); //v2

	glVertex2i(350, 250);  //v3
	glVertex2i(300, 100);  //v4
	glVertex2i(450, 150);  //v5

	glEnd();

	glFlush();
}

void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100); //optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;

}
*/

//bai 9 lap 1
/*
#include <math.h>

const double R = 150;
const double pi = 3.141592654;

struct GLdoublePoint
{
	GLdouble x;
	GLdouble y;
};

void Init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glShadeModel(GL_FLAT);
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);//Xoa man hinh
	glPointSize(5.0);
	glColor3f(0.0f, 0.0f, 0.0f); // Thiey lap mau ve (den)
	glBegin(GL_POINTS);
			GLdoublePoint V1, V2, V3, V4, V5, V0;
			V0.x = screenWidth / 2;
			V0.y = screenHeight / 2;
			V1.x = V0.x;
			V1.y = V0.y + R;
			V2.x = V0.x + R * sin(2 * pi / 5);
			V2.y = V0.y + R * cos(2 * pi / 5);
			V3.x = V0.x + R * sin(pi / 5);
			V3.y = V0.y - R * cos(pi / 5);
			V4.x = V0.x - R * sin(pi / 5);
			V4.y = V0.y - R * cos(pi / 5);
			V5.x = V0.x - R * sin(2 * pi / 5);
			V5.y = V0.y + R * cos(2 * pi / 5);

			glVertex2d(V1.x, V1.y);
			glVertex2d(V2.x, V2.y);
			glVertex2d(V3.x, V4.y);
			glVertex2d(V4.x, V4.y);
			glVertex2d(V5.x, V5.y);

	glEnd();

	glFlush();
}

void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100); //optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;

}
*/

// bai 10 lap 1
/*
#define PI 3.14159265358979323846
#define STEPS 40
#include <math.h>


void Init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}

void glCirCle(GLint x, GLint y, GLint radius)
{
	GLfloat twicePi = (GLfloat)2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(x, y); //taam vongf tronf
	for (int i = 0; i <= STEPS; i++)
	{
		glVertex2i((GLint)(x + (radius * cos(i * twicePi / STEPS)) + 0.5),
			(GLint)(y + (radius * sin(i * twicePi / STEPS)) + 0.5));
	}

	glEnd();
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	glCirCle(320, 240, 150);

	glFlush();
}
void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100); //optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;

}
*/

//bai 11 lap 1

//#define PI 3.14159265358979323846
//#define STEPS 40
//#include <math.h>
//
//
//void Init(void)
//{
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glShadeModel(GL_FLAT);
//}
//
//void glCirCle(GLint x, GLint y, GLint radius)
//{
//	GLfloat twicePi = (GLfloat)2.0f * PI;
//	glBegin(GL_TRIANGLE_FAN);
//	glVertex2i(x, y); //taam vongf tronf
//	for (int i = 0; i <= STEPS; i++)
//	{
//		glVertex2i((GLint)(x + (radius * cos(i * twicePi / STEPS)) + 0.5),
//			(GLint)(y + (radius * sin(i * twicePi / STEPS)) + 0.5));
//	}
//
//	glEnd();
//}
//
//void Display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	GLfloat red = 1.0f;
//	GLfloat green = 1.0f;
//	GLfloat blue = 1.0f;
//	for (int r = 200; r > 0; r -= 30)
//	{
//		glColor3f(red, green, blue);
//		glCirCle(320, 240, r);
//		red -= 0.1f;
//		green -= 0.2f;
//		blue -= 0.3f;
//
//	}
//
//	glFlush();
//}
//void Reshape(int w, int h)
//{
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutInitWindowSize(screenWidth, screenHeight); //optional
//	glutInitWindowPosition(100, 100); //optional
//	glutCreateWindow(argv[0]);
//	Init();
//	glutDisplayFunc(Display);
//	glutReshapeFunc(Reshape);
//	glutMainLoop();
//	return 0;
//
//}

//bai 12 - lap 1
/*
#define PI 3.14159265358979323846
#define STEPS 40
#define MAX_STARS 300
#include <math.h>

typedef struct star
{
	GLint x, y;
	GLint radius;
	GLint velocity;
	GLint intensity;
}STAR;

STAR sky[MAX_STARS];

void Init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
}


void glCirCle(GLint x, GLint y, GLint radius)
{
	GLfloat twicePi = (GLfloat)2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glVertex2i(x, y); //taam vongf tronf
	for (int i = 0; i <= STEPS; i++)
	{
		glVertex2i((GLint)(x + (radius * cos(i * twicePi / STEPS)) + 0.5),
			(GLint)(y + (radius * sin(i * twicePi / STEPS)) + 0.5));
	}

	glEnd();
}

void skyInit()
{
	for (int i = 0; i < MAX_STARS; i++)
	{
		sky[i].x = rand() % screenWidth;
		sky[i].y = rand() % screenHeight;
		sky[i].radius = 1 + rand() % 3;
		sky[i].intensity = sky[i].radius / 3.0f;
		sky[i].velocity = sky[i].radius * 2 + rand() % 3;
	}
}

void skyDraw()
{
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);

	for (int i = 0; i < MAX_STARS; i++)
	{
		glColor3f(sky[i].intensity, sky[i].intensity, sky[i].intensity);
		glCirCle(sky[i].x, sky[i].y, sky[i].radius);
	}
}
void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);

	glPushMatrix();
	skyDraw();
	glPopMatrix();
	glutSwapBuffers();
}

void Update()
{
	for (int i = 0; i < MAX_STARS; i++)
	{
		sky[i].x += sky[i].velocity;
		if (sky[i].x >= screenWidth)
		{
			sky[i].x = 0;
			sky[i].y = rand() % screenHeight;
			sky[i].radius = 1 + rand() % 3;
			sky[i].intensity = sky[i].radius / 3.0f;
			sky[i].velocity = sky[i].radius * 2 + rand() % 3;
		}
		Sleep(50);
		glutPostRedisplay();
	}
}
void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100); //optional
	glutCreateWindow(argv[0]);
	Init();
	skyInit();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutIdleFunc(Update);
	glutMainLoop();
	return 0;

}*/

//bai 13 - lap 1
/*
static GLfloat spin = 0.0;

void Init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
}

void Display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glPushMatrix();
	glRotatef(spin, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0);
	glRectf(-25.0, -25.0, 25.0, 25.0);
	glPopMatrix();
	glutSwapBuffers();
}

void spinDisplay(void)
{
	spin = spin + 2.0;
	if(spin>360.0)
	{
		spin = spin - 360.0;
	}
	glutPostRedisplay();
}

void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-50.0, 50.0, -50.0, 50.0, -1.0, 1.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void Mouse(int button, int state, int x, int y)
{
	switch (button) {
	case GLUT_LEFT_BUTTON:
			if (state == GLUT_DOWN)
				glutIdleFunc(spinDisplay);
		break;
	case GLUT_MIDDLE_BUTTON:
		if (state == GLUT_DOWN)
			glutIdleFunc(NULL);
		break;
	default:
		break;
	}
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100); //optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMouseFunc(Mouse);
	glutMainLoop();
	return 0;
}

*/
#include <math.h>

const double R = 150;
const double pi = 3.141592654;

struct GLdoublePoint
{
	GLdouble x;
	GLdouble y;
};

void Init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glShadeModel(GL_FLAT);
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);//Xoa man hinh
	glPointSize(5.0);
	glColor3f(0.0f, 0.0f, 0.0f); // Thiey lap mau ve (den)
	glBegin(GL_POINTS);
	GLdoublePoint V1, V2, V3, V4, V5, V0, V6;
	V0.x = screenWidth / 2;
	V0.y = screenHeight / 2;
	V1.x = V0.x;
	V1.y = V0.y + R;
	V2.x = V0.x + R * sin(2 * pi / 5);
	V2.y = V0.y + R * cos(2 * pi / 5);
	V3.x = V0.x + R * sin(pi / 5);
	V3.y = V0.y - R * cos(pi / 5);
	V4.x = V0.x - R * sin(pi / 5);
	V4.y = V0.y - R * cos(pi / 5);
	V5.x = V0.x - R * sin(2 * pi / 5);
	V5.y = V0.y + R * cos(2 * pi / 5);
	V6.x = V0.x - R * sin(2 *pi / 2.5);
	V6.y = V0.x + R * sin(2 * pi /2.5 );


	glVertex2d(V1.x, V1.y);
	glVertex2d(V2.x, V2.y);
	glVertex2d(V3.x, V4.y);
	glVertex2d(V4.x, V4.y);
	glVertex2d(V5.x, V5.y);
	glVertex2d(V6.x, V6.y);
	

	glEnd();

	glFlush();
}

void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100); //optional
	glutCreateWindow(argv[0]);
	Init();
	glutDisplayFunc(Display);
	glutReshapeFunc(Reshape);
	glutMainLoop();
	return 0;

}