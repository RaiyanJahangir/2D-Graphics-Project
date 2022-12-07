#include<windows.h>
#include <GL/glut.h>


void Initialize( )
{
glClearColor(0.0, 0.0, 0.0,0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-1, 1.0, -1, 1.0, 1.0, -1.0);
}




void Draw()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1.0, 1.0, 1.0);


glBegin(GL_POINTS);
 glVertex2f(0.6, 0.6);
glEnd();

glBegin(GL_LINES);
glVertex2f(0.2,0.2);
glVertex2f(-0.5,-0.5);
glEnd();


glFlush();
}


int main(int iArgc , char** cppArgv)
{
glutInit(&iArgc , cppArgv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);


glutInitWindowSize(250,250);
glutInitWindowPosition(200,200);
glutCreateWindow("CSE_414");


Initialize();


glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}
