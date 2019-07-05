/**
 * Test file
 */

#include <stdio.h>
#include <GL/glut.h>
#include <math.h>

#define pi 3.142857

void myInit(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glColor3f(1.0, 0.5, 0.25);

    glPointSize(1.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1280, 1280, -720, 720);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);
    float x, y, i;
    int num =0;
    for (i = 0; i < (2 * pi); i += 0.0000001)
    {
        
        x = 200 * cos(i);
        y = 200 * sin(i);   
        int b = 0xffab;

        glVertex2i(x, y);
      
    }
    glEnd();
    glFlush();

}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    // giving window size in X- and Y- direction
    glutInitWindowSize(1280, 720);
    glutInitWindowPosition(0, 0);

    // Giving name to window
    glutCreateWindow("Circle Drawing");
    myInit();

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}