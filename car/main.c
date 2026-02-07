#include <GL/glut.h>
#include <math.h>
void drawHouse(void) {

    glColor3f(0.96f, 0.87f, 0.70f);
    glBegin(GL_POLYGON);
        glVertex2f(3,3);
        glVertex2f(3, 10);
        glVertex2f(11, 10);
        glVertex2f(11, 3);
    glEnd();


    glColor3f(0.75f, 0.13f, 0.13f);
   glBegin(GL_POLYGON);
        glVertex2f(11,3);
        glVertex2f(16, 3);
        glVertex2f(16, 5);
        glVertex2f(13, 8);
       glVertex2f(11, 8);
    glEnd();

    glColor3f(0.0f, 0.87f, 0.70f);
   glBegin(GL_POLYGON);
        glVertex2f(11,5);
        glVertex2f(15, 5);
        glVertex2f(13, 7.4);
        glVertex2f(11, 7.4);
    glEnd();


    float cx = 5;  // center x
    float cy = 3;  // center y
    float r  = 1.5;   // radius
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float rad = i * 3.1416 / 180;
        glVertex2f(cx + cos(rad) * r, cy + sin(rad) * r);
    }
    glEnd();

     cx = 12;  // center x
     cy = 3;  // center y
     r  = 1.5;   // radius
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    for (int i = 0; i < 360; i++)
    {
        float rad = i * 3.1416 / 180;
        glVertex2f(cx + cos(rad) * r, cy + sin(rad) * r);
    }
    glEnd();
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear screen
    drawHouse();                   // Call house function
    glFlush();                     // Render
}

void init(void) {
    glClearColor(0.68f, 0.85f, 0.90f, 0.0f); // Light sky blue background
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 20.0, 0.0, 12.0, -1.0, 1.0);  // Orthographic projection
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Aesthetic House Drawing");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
