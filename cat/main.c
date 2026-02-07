#include <GL/glut.h>
#include <math.h>
void drawHouse(void) {

    glColor3f(0.9f, 0.0f, 0.7f);
    glBegin(GL_POLYGON);
        glVertex2f(10, 13);
        glVertex2f(12, 13);
        glVertex2f(14, 13);
        glVertex2f(15,14);
        glVertex2f(15, 15);
        glVertex2f(14, 16);
        glVertex2f(14, 18);
        glVertex2f(13, 19);
        glVertex2f(11, 19);
        glVertex2f(10, 18);
        glVertex2f(10, 16);
        glVertex2f(9, 15);
        glVertex2f(9,14);
    glEnd();


    glColor3f(0.1f, 0.0f, 0.2f);
    glBegin(GL_POLYGON);
        glVertex2f(11, 17);
        glVertex2f(12, 16);
        glVertex2f(13, 17);
        glVertex2f(13, 19);
        glVertex2f(11, 19);

    glEnd();

    glColor3f(0.5f, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
        glVertex2f(9, 14);
        glVertex2f(8, 14);
        glVertex2f(7, 15);
        glVertex2f(7, 17);
        glVertex2f(9, 19);
        glVertex2f(8, 19);
        glVertex2f(6, 17);
        glVertex2f(6, 15);
        glVertex2f(7, 14);
        glVertex2f(8, 13);
        glVertex2f(10,13);
    glEnd();

    glColor3f(0.68f, 0.85f, 0.90f);
    glBegin(GL_POLYGON);
        glVertex2f(9, 14);
        glVertex2f(9, 19);
        glVertex2f(7, 17);
        glVertex2f(7, 15);
        glVertex2f(8, 14);
    glEnd();

    glColor3f(0.65f, 0.3f, 0.0f);
      glBegin(GL_POLYGON);
        glVertex2f(11, 19);
        glVertex2f(13, 19);
        glVertex2f(14, 20);
        glVertex2f(14, 21);
        glVertex2f(13, 22);
        glVertex2f(11, 22);
        glVertex2f(10, 21);
        glVertex2f(10, 20);

    glEnd();

     glColor3f(0.1f, 0.0f, 0.4f);
      glBegin(GL_POLYGON);
        glVertex2f(12, 21);
        glVertex2f(13, 22);
        glVertex2f(11, 22);
       glEnd();

       glColor3f(0.5f, 0.0f, 0.5f);
      glBegin(GL_POLYGON);
        glVertex2f(10, 21);
        glVertex2f(11, 22);
        glVertex2f(10, 23);
       glEnd();

        glColor3f(0.5f, 0.0f, 0.5f);
      glBegin(GL_POLYGON);
        glVertex2f(13, 22);
        glVertex2f(14, 21);
        glVertex2f(14, 23);
       glEnd();

        glColor3f(0.5f, 0.0f, 0.5f);
      glBegin(GL_LINES);
        glVertex2f(10, 13);
        glVertex2f(10, 14);
        glVertex2f(10, 14);
        glVertex2f(11, 14);
        glVertex2f(11, 14);
        glVertex2f(11, 15);
       glEnd();

    glColor3f(0.5f, 0.0f, 0.5f);
      glBegin(GL_LINES);
        glVertex2f(14, 13);
        glVertex2f(14, 14);
        glVertex2f(14, 14);
        glVertex2f(13, 14);
        glVertex2f(13, 14);
        glVertex2f(13, 15);
       glEnd();
       glColor3f(0.5f, 0.0f, 0.5f);
      glBegin(GL_LINES);
        glVertex2f(12, 16);
        glVertex2f(12, 13);
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
    glOrtho(0.0, 20.0, 0.0, 25.0, -1.0, 1.0);  // Orthographic projection
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
