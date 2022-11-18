#include<stdlib.h>
#include<GL/glut.h>
#include<time.h>
void bbb(void) {
	glClearColor(1, 1, 1, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	//glEnable(GL_POINT_SMOOTH);
	glPointSize(15);
	glBegin(GL_POINTS);   
	for (int x = 50;x <= 400;x += 50) {
		int c = rand() % 255;
		int b = rand() % 255;
		int r = rand() % 255;
		for (int m = 50; m <= 400;m +=50) {
			//glBegin(GL_POINTS);
			glColor3ub(c, b, r);
			glVertex2f(50 + m, 50 + x);
			glVertex2f(100 + m, 50 + x);
			glVertex2f(100 + m, 100 + x);
			glVertex2f(50 + m, 100 + x);
			c =! b;
			c =! r;	}}
glEnd();         
glFlush();}
void main()
{
	glutInitWindowPosition(300, 300);
	glutInitWindowSize(600, 600);
	glutCreateWindow("colors square");
	gluOrtho2D(0, 350, 0, 200);
	glutDisplayFunc(bbb);
	glutMainLoop();
}