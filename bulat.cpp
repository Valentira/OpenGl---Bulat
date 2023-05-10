#include <gl/glut.h>
#include <math.h>

const double PI = 3.141;
int i,radius, jumlah_titik, x_tengah, y_tengah;

void display(void)
{
    glColor3f(1,0,-1);
    glBegin(GL_POLYGON);
    radius = 60;
    jumlah_titik = 60;
    x_tengah = 0;
    y_tengah = 0;

    for (i = 0; i<= 360; i++)
    {
        float sudut = i * (2 * PI / jumlah_titik);
        float x = x_tengah + radius * cos(sudut); 
        float y = y_tengah + radius * sin(sudut);
        glVertex2f(x/100, y/100);
    }
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowSize(400,400);
    glutCreateWindow("Lingkaran");
    glutDisplayFunc(display);
    glutMainLoop();
    return 4;
}