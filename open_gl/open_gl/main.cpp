#include "C:\Users\Chau Hung\Desktop\open_gl\glew-1.11.0\include\GL\glew.h"
#include "C:\Users\Chau Hung\Desktop\open_gl\freeglut\include\GL\freeglut.h"

const int screenWidth  = 640;
const int screenHeight = 480;

void Init(void)// ve hinh tam giac
{
	/*glClearColor(0.0, 0.0, 0.0, 0.0);*///clear black // lap 1 bai 1,2
	glClearColor(1.0, 1.0, 1.0, 1.0); // clear white (lap 1 bai 3, 4)
	//glShadeModel(GL_FLAT); lap 1 bai 1,2 
}

//void Triangle()
//{
//		//To mau 
//	glBegin(GL_TRIANGLES);
//			glColor3f(1.0, 0.0, 0.0); //mau do
//			glVertex2i(50, 50);
//			glVertex2i(250, 50);
//			glVertex2i(150, 250);
//	glEnd();
//} // To mau bai 3 

void Triangle2()// To mau bai 4 
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
	glClear(GL_COLOR_BUFFER_BIT); // Clear the color bufer
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

void Display2()
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

void Display3() // dung cho bai 3 va 4
{
	glClear(GL_COLOR_BUFFER_BIT);
	//Triangle(); to mau bai 3
	Triangle2(); // To mau bai 4 
	glFlush();
}

void Reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

void Reshape2(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
}

void Reshape3(int w, int h) // reshap dung cho bai 3 va 4 
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h);
	glMatrixMode(GL_MODELVIEW);
}


void Init1(void)// ve hinh vuong
{
	glClearColor(0.0, 0.0, 0.0, 0.0); // clear black

}

void drawSquare(GLint x, GLint y, GLint a)
{
	glBegin(GL_POLYGON);
			glVertex2i(x, y);
			glVertex2i(x + a, y);
			glVertex2i(x + a, y + a);
			glVertex2i(x, y + a);

	glEnd();

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

void Display4()
{
	glClear(GL_COLOR_BUFFER_BIT);

	GLint size = 200; // do dai canh = 200
	GLint x = (screenWidth - size) / 2; //canh theo vao giua x 
	GLint y = (screenHeight - size) / 2; // canh theo vao giua y
	drawSquare(x, y, size);

	glFlush();
}

void Display5()
{
	glClear(GL_COLOR_BUFFER_BIT);

	GLint w = 400, h = 200; // width = 400, height = 200
	GLint x = (screenWidth - w) / 2; // canh vao giua man hinh
	GLint y = (screenHeight - h) / 2;
	DrawRectangle(x, y, w, h);

	glFlush();

}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(screenWidth, screenHeight); //optional
	glutInitWindowPosition(100, 100);//optional
	//glutCreateWindow("Points"); lap 1 Bai 1
	glutCreateWindow(argv[0]);
	Init1();
	/*glutDisplayFunc(Display);
	glutReshapeFunc(Reshape); */ //lap 1 Bai 1
	glutDisplayFunc(Display5);
	//glutReshapeFunc(Reshape2); lap 1 bai 2
	glutReshapeFunc(Reshape3); // lap 1 bai 3,4,5
	glutMainLoop();
	return 0;

}
