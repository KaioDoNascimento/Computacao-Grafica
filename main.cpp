/*
	Esse trabalho foi feito usando a bilioteca OpenGL, por isso é necessário baixar os arquivos 
	necessários para compilar o código normalmente. Esses arquivos e o passo-a-passo sobre como 
	baixá-los estão disponíveis nesse repositório, no pdf Instructions.
*/

#include <GL\glut.h>

#include <cmath>

int eixo = 1;

float R = 0, G = 0, B = 0;

float a = 1, b = 0, c = 0;

void Funcao()

{

    float x, y;

    glColor3f(R, G, B);

    glLineWidth(2.5);

    glBegin(GL_LINE_STRIP);

    for (x = -10; x <= 10; x += 0.01)

    {

        y = a * x * x + b * x + c;

        glVertex2f(x, y);
    }

    glEnd();
}

void Eixo()

{

    glLineWidth(3);

    glColor3f(0, 0, 0);

    glBegin(GL_LINES);

    glVertex2f(-10, 0);

    glVertex2f(10, 0);

    glVertex2f(0, 10);

    glVertex2f(0, -10);

    glEnd();
}

void Layout()

{

    float x, y;

    glColor3f(0, 0, 0);

    glBegin(GL_LINE_STRIP);

    for (x = -1; x <= 1; x += 0.01)

    {

        y = 1.2 * x * x;

        glVertex2f(x + 11.2, y + 3);
    }

    glEnd();

    glColor3f(0, 0, 0);

    glBegin(GL_LINE_STRIP);

    for (x = -1; x <= 1; x += 0.01)

    {

        y = 1.2 * (-x) * x;

        glVertex2f(x + 13.7, y + 4.3);
    }

    glEnd();

    glColor3f(0,0,0);
    
    glBegin(GL_TRIANGLES);
    
    glVertex2f(10.8,1.3);
    
    glVertex2f(11.3,1.8);
    
    glVertex2f(11.8,1.3);
    
    glEnd();
    
    glColor3f(0,0,0);
    
    glBegin(GL_QUADS);
    
    glVertex2f(11.1,1.3);
    
    glVertex2f(11.5,1.3);
    
    glVertex2f(11.5,0.7);
    
    glVertex2f(11.1, 0.7);
    
    glEnd();
    
    glColor3f(0,0,0);
    
    glBegin(GL_QUADS);
    
    glVertex2f(13.5,1.5);
    
    glVertex2f(13.9,1.5);
    
    glVertex2f(13.9,0.9);
    
    glVertex2f(13.5,0.9);
    
    glEnd();
    
    glColor3f(0,0,0);
    
    glBegin(GL_TRIANGLES);
    
    glVertex2f(13.2,1);
    
    glVertex2f(13.7,0.5);
    
    glVertex2f(14.2,1);
    
    glEnd();

    glBegin(GL_QUADS);

    glColor3f(0, 0, 1);

    glVertex2f(10.0, -5.0);

    glVertex2f(10.0, -7.5);

    glVertex2f(12.5, -7.5);

    glVertex2f(12.5, -5.0);

    glColor3f(1, 0, 0);

    glVertex2f(12.5, -5.0);

    glVertex2f(12.5, -7.5);

    glVertex2f(15.0, -7.5);

    glVertex2f(15.0, -5.0);

    glColor3f(0, 1, 0);

    glVertex2f(10.0, -7.5);

    glVertex2f(10.0, -10.0);

    glVertex2f(12.5, -10.0);

    glVertex2f(12.5, -7.5);

    glColor3f(0.2, 0.2, 0.2);

    glVertex2f(12.5, -7.5);

    glVertex2f(12.5, -10.0);

    glVertex2f(15.0, -10.0);

    glVertex2f(15.0, -7.5);

    glColor3f(1, 1, 0);

    glVertex2f(12.5, -2.5);

    glVertex2f(12.5, -5);

    glVertex2f(15, -5);

    glVertex2f(15, -2.5);

    glColor3f(1, 0.2, 0.6);

    glVertex2f(10, -2.5);

    glVertex2f(10, -5);

    glVertex2f(12.5, -5);

    glVertex2f(12.5, -2.5);

    glColor3f(0, 1, 1);

    glVertex2f(12.5, 0);

    glVertex2f(12.5, -2.5);

    glVertex2f(15, -2.5);

    glVertex2f(15, 0);

    glColor3f(1, 0.5, 0);

    glVertex2f(10, 0);

    glVertex2f(10, -2.5);

    glVertex2f(12.5, -2.5);

    glVertex2f(12.5, 0);

    glEnd();

    glColor3f(0, 0, 0);

    glBegin(GL_LINES);

    glVertex2f(10.4, 7.5);

    glVertex2f(14.6, 7.5);

    glVertex2f(12.5, 5.4);

    glVertex2f(12.5, 9.6);

    glEnd();

    glLineWidth(5);

    glBegin(GL_LINE_LOOP);

    glVertex2f(-10, -10);

    glVertex2f(15, -10);

    glVertex2f(15, 10);

    glVertex2f(-10, 10);

    glEnd();

    glBegin(GL_LINES);

    glVertex2f(10, -10);

    glVertex2f(10, 10);

    glVertex2f(10, 5.0);

    glVertex2f(15, 5.0);

    glVertex2f(10, 2.5);

    glVertex2f(15, 2.5);

    glVertex2f(10, 0.0);

    glVertex2f(15, 0.0);

    glVertex2f(10, -2.5);

    glVertex2f(15, -2.5);

    glVertex2f(10, -5.0);

    glVertex2f(15, -5.0);

    glVertex2f(10, -7.5);

    glVertex2f(15, -7.5);

    glVertex2f(12.5, -10.0);

    glVertex2f(12.5, 5.0);

    glEnd();
}

void Display()

{

    glClearColor(0.8, 0.8, 0.8, 0);

    glClear(GL_COLOR_BUFFER_BIT);

    if (eixo == 1)

        Eixo();

    Funcao();

    Layout();

    glFlush();
}

void TeclasEspeciais(int key, int x, int y)

{

    switch (key)

    {

    case GLUT_KEY_UP:

        c = c + 0.5;

        break;

    case GLUT_KEY_DOWN:

        c = c - 0.5;

        break;
    }

    Display();
}

void Teclado(unsigned char key, int x, int y)

{

    switch (key)

    {

    case '1':

        R = 1, G = 1, B = 0;

        break;

    case '2':

        R = 1, G = 0.2, B = 0.6;

        break;

    case '3':

        R = 0, G = 1, B = 1;

        break;

    case '4':

        R = 1, G = 0.5, B = 0;

        break;

    case '5':

        R = 0, G = 0, B = 1;

        break;

    case '6':

        R = 1, G = 0, B = 0;

        break;

    case '7':

        R = 0, G = 1, B = 0;

        break;

    case '8':

        R = 0, G = 0, B = 0;

        break;

    case 'A':

    case 'a':

        a = a * (-1);

        break;

    case 'e':

    case 'E':

        eixo = eixo * (-1);

        break;
    }

    Display();
}

void Mouse(int button, int state, int x, int y)

{

    if ((button == GLUT_LEFT_BUTTON) && (state == GLUT_DOWN))

    {

        if ((x > 400) && (y < 100))

        {

            eixo = eixo * (-1);
        }

        if ((y > 100) && (y < 150))

        {

            if ((x > 400) && (x < 450))

            {

                a = 1;
            }

            if (x > 450)

            {

                a = -1;
            }
        }

        if ((x > 400) && (x < 450))

        {

            if ((y > 300) && (y < 350))

            {

                R = 0;

                G = 0;

                B = 1;
            }

            if ((y > 350) && (y < 400))

            {

                R = 0;

                G = 1;

                B = 0;
            }

            if ((y > 250) && (y < 300))

            {

                R = 1;

                G = 0.2;

                B = 0.6;
            }

            if ((y > 200) && (y < 250))

            {

                R = 1;

                G = 0.5;

                B = 0;
            }

            if ((y > 150) && (y < 200))

            {

                c = c + 0.5;
            }
        }

        if ((x > 450) && (x < 500))

        {

            if ((y > 300) && (y < 350))

            {

                R = 1;

                G = 0;

                B = 0;
            }

            if ((y > 350) && (y < 400))

            {

                R = 0.2;

                G = 0.2;

                B = 0.2;
            }

            if ((y > 250) && (y < 300))

            {

                R = 1;

                G = 1;

                B = 0;
            }

            if ((y > 200) && (y < 250))

            {

                R = 0;

                G = 1;

                B = 1;
            }

            if ((y > 150) && (y < 200))

            {

                c = c - 0.5;
            }
        }
    }

    Display();
}

int main(int argc, char **argv)

{

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(500, 400);

    glutInitWindowPosition(450, 100);

    glutCreateWindow("Projeto de Computação Gráfica");

    glutMouseFunc(Mouse);

    glutKeyboardFunc(Teclado);

    glutSpecialFunc(TeclasEspeciais);

    gluOrtho2D(-10, 15, -10, 10);

    glutDisplayFunc(Display);

    glutMainLoop();

    return (0);
}
