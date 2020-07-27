//Chau Van Hung 
//DoHoaMayTinh
#include "Dependencies\glew\glew.h"
#include "Dependencies\freeglut\freeglut.h"

//const int screenWidth = 640;//ap dung cho bai 1 tới 12 lap 1 va bai 2 lap 2
//const int screenHeight = 480;//ap dung cho bai 1 tới 12 lap 1 va bai 2 lap 2
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
//bai 14- lap 1 chua sua xong
//#include <math.h>
//
//const double R = 150;
//const double pi = 3.141592654;
//
//struct GLdoublePoint
//{
//	GLdouble x;
//	GLdouble y;
//};
//
//void Init(void)
//{
//	glClearColor(1.0, 1.0, 1.0, 0.0);
//	glShadeModel(GL_FLAT);
//}
//
//void Display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);//Xoa man hinh
//	glPointSize(5.0);
//	glColor3f(0.0f, 0.0f, 0.0f); // Thiey lap mau ve (den)
//	glBegin(GL_POINTS);
//	GLdoublePoint V1, V2, V3, V4, V5, V0, V6;
//	V0.x = screenWidth / 2;
//	V0.y = screenHeight / 2;
//	V1.x = V0.x;
//	V1.y = V0.y + R;
//	V2.x = V0.x + R * sin(2 * pi / 5);
//	V2.y = V0.y + R * cos(2 * pi / 5);
//	V3.x = V0.x + R * sin(pi / 5);
//	V3.y = V0.y - R * cos(pi / 5);
//	V4.x = V0.x - R * sin(pi / 5);
//	V4.y = V0.y - R * cos(pi / 5);
//	V5.x = V0.x - R * sin(2 * pi / 5);
//	V5.y = V0.y + R * cos(2 * pi / 5);
//	V6.x = V0.x - R * sin(2 *pi / 2.5);
//	V6.y = V0.x + R * sin(2 * pi /2.5 );
//
//
//	glVertex2d(V1.x, V1.y);
//	glVertex2d(V2.x, V2.y);
//	glVertex2d(V3.x, V4.y);
//	glVertex2d(V4.x, V4.y);
//	glVertex2d(V5.x, V5.y);
//	glVertex2d(V6.x, V6.y);
//	
//
//	glEnd();
//
//	glFlush();
//}
//
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

//bai 1 -lap 2

//#include <math.h>
//#define PI 3.14159265f
//
////Global variables
//char title[] = "Bouncing Ball (2D)";
//int windowWitdh = 640;
//int windowHeight = 480;
//int windowPosX = 50;
//int windowPosY = 50;
//
//GLfloat ballRadius = 0.5f;
//GLfloat ballX = 0.0f;
//GLfloat ballY = 0.0f;
//GLfloat ballXMax, ballXMin, ballYMax, ballYMin;
//GLfloat xSpeed = 0.02f;
//GLfloat ySpeed = 0.007f;
//int refreshMillis = 30;
//
//GLdouble clipAreaXLeft, clipAreaXRight, clipAreaYBottom, clipAreaYTop;
//
//void InitGL()
//{
//	glClearColor(0.0, 0.0, 0.0, 1.0);
//
//}
//
//void Display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//
//	glTranslatef(ballX, ballY, 0.0f);
//
//	glBegin(GL_TRIANGLE_FAN);
//	glColor3f(0.0f, 0.0f, 1.0f);
//	glVertex2f(0.0f, 0.0f);
//	int numSegments = 100;
//	GLfloat angle;
//	for (int i = 0; i <= numSegments; i++)
//	{
//
//		angle = i * 2.0f * PI / numSegments;
//		glVertex2f(cos(angle) * ballRadius, sin(angle) * ballRadius);
//	}
//		glEnd();
//
//		glutSwapBuffers();
//	
//	ballX += xSpeed;
//	ballY += ySpeed;
//
//	if (ballX > ballXMax)
//	{
//		ballX = ballXMax;
//		xSpeed = -xSpeed;
//	}
//
//	else if (ballX < ballXMin)
//	{
//		ballX = ballXMin;
//		xSpeed = -xSpeed;
//	}
//
//	if (ballY > ballYMax)
//	{
//		ballY = ballYMax;
//		ySpeed = -ySpeed;
//	}
//	else if (ballY < ballYMin)
//	{
//		ballY = ballYMin;
//		ySpeed = -ySpeed;
//	}
//}
//
//void Reshape(GLsizei width, GLsizei height)
//{
//	if (height == 0) height = 1;
//	GLfloat aspect = (GLfloat)width / (GLfloat)height;
//
//	glViewport(0, 0, width, height);
//
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//
//	if (width >= height)
//	{
//		clipAreaXLeft = -1.0 * aspect;
//		clipAreaXRight = 1.0 * aspect;
//		clipAreaYBottom = -1.0;
//		clipAreaYTop = 1.0;
//	}
//
//	else
//	{
//		clipAreaXLeft = -1.0;
//		clipAreaXRight = 1.0;
//		clipAreaYBottom = -1.0 / aspect;
//		clipAreaYTop = 1.0 / aspect;
//	}
//	gluOrtho2D(clipAreaXLeft, clipAreaXRight, clipAreaYBottom, clipAreaYTop);
//	ballXMin = clipAreaXLeft + ballRadius;
//	ballXMax = clipAreaXRight - ballRadius;
//	ballYMin = clipAreaYBottom + ballRadius;
//	ballYMax = clipAreaYTop - ballRadius;
//
//}
//
//void Timer(int value)
//{
//	glutPostRedisplay();
//	glutTimerFunc(refreshMillis, Timer, 0);
//
//}
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE);
//	glutInitWindowSize(windowWitdh, windowHeight);
//
//	glutInitWindowPosition(windowPosX, windowPosY);
//
//	glutCreateWindow(title);
//	glutDisplayFunc(Display);
//	glutReshapeFunc(Reshape);
//	glutTimerFunc(0, Timer, 0);
//	InitGL();
//	glutMainLoop();
//	return 0;
//}

//bai 2 - lap 2
//
//void Init(void)
//{
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glShadeModel(GL_SMOOTH);
//}
//
//void Display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glColor3f(1.0, 1.0, 1.0);
//
//	glutSolidTeapot(0.5);
//
//	glFlush();
//}
//
//void Reshape(int w, int h)
//{
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//}
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
//	glutInitWindowSize(screenWidth,screenHeight);
//
//	glutInitWindowPosition(100,100);
//
//	glutCreateWindow(argv[0]);
//	Init();
//	glutDisplayFunc(Display);
//	glutReshapeFunc(Reshape);
//	
//	glutMainLoop();
//	return 0;
//}

//bai 3 -lap 2
/*
#include<math.h>
#include<iostream>

//các hàm vẽ
void InitGlut(int argc, char** argv);
void DisplayFunc(void);
void IdleFunc(void);
void ReshapeFunc(int width, int height);
void MouseFunc(int button, int state, int x, int y);
void KeyBoardFunc(unsigned char key, int x, int y);
void SpecialFunc(int key, int x, int y);
void MouseMotionFunc(int x, int y);
//-----------------------------------------------------------//


//other[openGL] functions
void CountFrames(void);//hàm tính frames
void RenderBitmapString(float x, float y, float z, void* font, char* string);//hàm render
//----------------------------------------------------------------------------//

bool bUserPredefinedCamera = true; //

bool bFullScreen = false;
int nWindowID;

//camera attributes
float ViewerPosition[3] = { 0.0,0.0,-50.0 };
float ViewerDirection[3] = { 0.0,0.0,0.0 };
float ViewerUp[3] = { 0.0,1.0,0.0 };

//roatation values for the navigation

float NavigationRotation[3] = { 0.0,0.0,0.0 };
//--------------------------------------------------//

//framecounter
char pixelstring[30];//pixel
int cframe = 0;//
int time = 0;
int timebase = 0;

//parameters for the navigation

//position of the mouse when pressed

int MousePressedX = 0, MousePressedY = 0;
float LastXOffset = 0.0, LastYOffset = 0.0, LastZOffset = 0.0;

//mouse button states
int LeftMouseButtonActive = 0,
MiddleMouseButtonActive = 0,
RightMouseButtonActive = 0;

//modifier state

int ShiftActive = 0, AltActive = 0, CtrlActive = 0;

//---------------------------------------------------------------//
bool Init = false;
//----------------------------------------------------------------//

void DisplayFunc(void)
{
	//Clear the buffers

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glEnable(GL_DEPTH_TEST);
	glDepthFunc(GL_LESS);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, 1.33, 1.0, 100000.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);

	GLfloat lightpos[4] = { 5.0,15.0,10.0,1.0 };
	glLightfv(GL_LIGHT0, GL_POSITION, lightpos);

	glTranslatef(ViewerPosition[0], ViewerPosition [1],ViewerPosition[2] );

	//add navigation rotation

	glRotatef(NavigationRotation[0], 1.0f, 0.0f, 0.0f);
	glRotatef(NavigationRotation[1], 0.0f, 1.0f, 0.0f);

	glutSolidTeapot(10.0);

	CountFrames();

	glutSwapBuffers();
}

//---------------------------------------------------------------------------------------//

void InitGlut(int argc, char** argv)
{
	//
	glutInit(&argc, argv);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 100);
	glutInitDisplayMode(GLUT_RGBA | GL_DOUBLE | GLUT_DEPTH);
	nWindowID = glutCreateWindow("simpleGLUT");

	//Register callbacks
	glutDisplayFunc(DisplayFunc);
	glutReshapeFunc(ReshapeFunc);
	glutKeyboardFunc(KeyBoardFunc);
	glutSpecialFunc(SpecialFunc);
	glutMouseFunc(MouseFunc);
	glutMotionFunc(MouseMotionFunc);
	glutIdleFunc(IdleFunc);
}

//-------------------------------------------------------------------------------//

void IdleFunc(void)
{
	glutPostRedisplay();
}

void ReshapeFunc(int width, int height)
{
	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(75.0, 1.33, 1.0, 1000.0);

	glMatrixMode(GL_MODELVIEW);
}

//mouse callback

void MouseFunc(int button, int state, int x, int y)
{
	//get the modifiers
	switch (glutGetModifiers())
	{
	case GLUT_ACTIVE_SHIFT:
			ShiftActive = 1;
			break;
	case GLUT_ACTIVE_ALT:
		AltActive = 1;
		break;
	case GLUT_ACTIVE_CTRL:
		CtrlActive = 1;
		break;
	default:
		ShiftActive = 0;
		AltActive = 0;
		CtrlActive = 0;
		break;
	}

	if (button == GLUT_LEFT_BUTTON)
		if (state == GLUT_DOWN)
		{
			LeftMouseButtonActive += 1;
		}
		else
			LeftMouseButtonActive -= 1;
	else
		if (button == GLUT_MIDDLE_BUTTON)
			if (state = GLUT_DOWN)
			{
				RightMouseButtonActive += 1;
				LastZOffset = 0.0;
			}
			else
				RightMouseButtonActive -= 1;

			//if(altactive){
				MousePressedX = x;
				MousePressedY = y;
			//}
	
}

void MouseMotionFunc(int x, int y)
{
	float xOffset = 0.0, yOffset = 0.0, zOffset = 0.0;
	if (LeftMouseButtonActive)
	{
		NavigationRotation[0] += ((MousePressedY - y) * 180.0f) / 200.0f;
		NavigationRotation[1] += ((MousePressedX - x) * 180.0f) / 200.0f;

		MousePressedY = y;
		MousePressedX = x;

	}
	else if (MiddleMouseButtonActive)
	{
		xOffset = (MousePressedX + x);
		if (!LastXOffset == 0.0)
		{
			ViewerPosition[0] -= (xOffset - LastXOffset) / 8.0;
			ViewerDirection[0] -= (xOffset - LastXOffset) / 8.0;
		}
		LastXOffset = xOffset;

		yOffset = (MousePressedY + y);
		if (!LastYOffset == 0.0)
		{
			ViewerPosition[1] += (yOffset - LastYOffset) / 8.0;
			ViewerDirection[1] += (yOffset - LastYOffset) / 8.0;
		}
		LastZOffset = zOffset;
	}

	else if (RightMouseButtonActive)
	{
		zOffset = (MousePressedX + x);
		if (!LastZOffset == 0.0)
		{
			ViewerPosition[2] -= (zOffset - LastZOffset) / 8.0;
			ViewerDirection[2] -= (zOffset - LastZOffset) / 8.0;


		}
		LastZOffset = zOffset;
	}
}
void KeyBoardFunc(unsigned char key, int x, int y)
{
	switch (key)
	{
#ifdef Win32

		//exit on escape
	case '\003':
		exit(0);
		break;
#endif
		//------------------------------------------------------//

		//switch to fullscreen
	case 'f':

		bFullScreen = !bFullScreen;
		if (bFullScreen)
			glutFullScreen();
		else
		{
			glutSetWindow(nWindowID);
			glutPositionWindow(100, 100);
			glutReshapeWindow(640, 480);
		}
		break;
		//--------------------------
	}
}
	//-----------------------

void SpecialFunc(int key, int x, int y)
{
}

//-----------------------------------//

void CountFrames(void)
{
	time = glutGet(GLUT_ELAPSED_TIME);
	cframe++;
	if(time - timebase > 50)
	{	
		printf(pixelstring, "fps: %4.2f", cframe * 1000.0 / timebase);
		timebase = time;
		cframe = 0;
		//Draw status text and uni-logo:
	}
	 
	glPushMatrix();
	glLoadIdentity();
	glDisable(GL_LIGHTING);
	glColor4f(1.0, 1.0, 1.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	glLoadIdentity();
	gluOrtho2D(0, 200, 0, 200);
	glMatrixMode(GL_MODELVIEW);

	//render string
	RenderBitmapString(5, 5, 0.0, GLUT_BITMAP_HELVETICA_10, pixelstring);

	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();
	glMatrixMode(GL_MODELVIEW);

}

//------------------------------------------------//

void RenderBitmapString(float x, float y, float z, void* font, char* string)
{
	char* c;
	glRasterPos3f(x, y, z);
	for (c = string; *c != '\0'; c++)
	{
		glutBitmapCharacter(font, *c);
	}
}

//--------------------------------------

void main(int argc, char** argv)
{
	printf("SipmpleGLUT\n\tGordon Wetzstein [gordon.wetzstein@medien.uni-weimar.de]\n\n");
	printf("key:\n\tf\t- togglr fullscreen\n\tesc\t- exit\n\n");
	printf("mouse:\n\tleft   button\t-   rotation\n\tmiddle   button\t- pannig\n\tright button\t- zoom in and out\n");

	InitGlut(argc, argv);
	glutMainLoop();
}
*/

//bai 4- lap 2
//
//
//void DisplayFunc(void)
//{
//	static float alpha = 0;
//	/*clear the buffer, clear the matrix*/
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glLoadIdentity();
//
//	/*A step backward, the spin the cube */
//	glTranslatef(0, 0, -10);
//	glRotatef(30, 1, 0, 0);
//	glRotatef(alpha, 0, 1, 0);
//
//	/* We tell we want to draw quads*/
//
//	glBegin(GL_QUADS);
//
//	/* Every four calls to glVertex, a quad is draw */
//
//	//1
//	glColor3f(0, 0, 0); glVertex3f(-1, -1, -1);
//	glColor3f(0, 0, 1); glVertex3f(-1, -1, 1);
//	glColor3f(0, 1, 1); glVertex3f(-1, 1, 1);
//	glColor3f(0, 1, 0); glVertex3f(-1, 1, -1);
//
//	//2
//	glColor3f(1, 0, 0); glVertex3f(1, -1, -1);
//	glColor3f(1, 0, 1); glVertex3f(1, -1, 1);
//	glColor3f(1, 1, 1); glVertex3f(1, 1,  1);
//	glColor3f(1, 1, 0); glVertex3f(1, 1, -1);
//
//	//3
//	glColor3f(0, 0, 0); glVertex3f(-1, -1, -1);
//	glColor3f(0, 0, 1); glVertex3f(-1, -1, 1);
//	glColor3f(1, 0, 1); glVertex3f(1, -1, 1);
//	glColor3f(1, 0, 0); glVertex3f(1, -1, -1);
//	
//	//4
//	glColor3f(0, 1, 0); glVertex3f(-1, 1, -1);
//	glColor3f(0, 1, 1); glVertex3f(-1, 1, 1);
//	glColor3f(1, 1, 1); glVertex3f(1, 1, 1);
//	glColor3f(1, 1, 0); glVertex3f(1, 1, -1);
//
//	//5
//	glColor3f(0, 0, 0); glVertex3f(-1, -1, -1);
//	glColor3f(0, 1, 0); glVertex3f(-1, 1, -1);
//	glColor3f(1, 1, 0); glVertex3f(1, 1, -1);
//	glColor3f(1, 0, 0); glVertex3f(1, -1, -1);
//
//	//6
//	glColor3f(0, 0, 1); glVertex3f(-1, -1, 1);
//	glColor3f(0, 1, 1); glVertex3f(-1, 1, 1);
//	glColor3f(1, 1, 1); glVertex3f(1, 1, 1);
//	glColor3f(1, 0, 1); glVertex3f(1, -1, 1);
//
//	/* No more quads */
//	glEnd();
//
//	/* Rotaate a bit more */
//	alpha = alpha + 0.1;
//
//	/*end*/
//
//	glFlush();
//	glutSwapBuffers();
//
//	/* Update again and again*/
//	glutPostRedisplay();
//}
//
///* Function called when the window is created or resized */
//
//void ReshapeFunc(int width, int height)
//{
//	glMatrixMode(GL_PROJECTION);
//
//	glLoadIdentity();
//	gluPerspective(20, width / (float)height, 5, 15);
//	glViewport(0, 0, width, height);
//
//	glMatrixMode(GL_MODELVIEW);
//	glutPostRedisplay();
//
//}
//
///* function called when a key is hit */
//
//void KeyboardFunc(unsigned char key, int x, int y)
//{
//	int foo;
//
//	foo = x + y; /*Has no effect: jusst to avoid a warning */
//	if ('q' == key || 'Q' == key || 27 == key)
//		exit(0);
//}
//
//int main(int argc, char** argv)
//{
//	/*Creation of the window*/
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
//	glutInitWindowSize(500, 500);
//	glutCreateWindow("Snipping cube");
//
//	/* OpenGL settings */
//
//	glClearColor(0, 0, 0, 0);
//	glEnable(GL_DEPTH_TEST);
//
//	/*Declabration of the callbacks */
//	glutDisplayFunc(&DisplayFunc);
//	glutReshapeFunc(&ReshapeFunc);
//	glutKeyboardFunc(&KeyboardFunc);
//
//	/* Loop */
//	glutMainLoop();
//
//	/*Never reached */
//	return 0;
//}

