#include<gl/glut.h>
/*Probar en Dev c++*/
int Dibujar(int x1, int y1, int x2,int y2, int x3, int y3)
{
	glBegin(GL_TRIANGLES);
	glVertex2i(x1, y1);
	glVertex2i(x2, y2);
	glVertex2i(x3, y3);
	glEnd();
}

void DibujarArdilla()
{
	glClear(GL_COLOR_BUFFER_BIT);
	Dibujar(200,10,240,50,280,10);
	Dibujar(300,30,250,80,300,130);
	Dibujar(320,10,320,140,380,70);
	Dibujar(320,10,320,140,380,70);
	Dibujar(400,90,330,160,400,230);
	Dibujar(310,170,380,250,240,250);
	Dibujar(290,150,240,100,240,200);
	Dibujar(220,100,220,220,160,160);
	Dibujar(210,80,110,80,150,140);
	Dibujar(140,160,190,220,140,270);
	Dibujar(120,170,120,260,70,260);
	Dibujar(110,280,90,280,90,300);
	Dibujar(110,150,20,150,60,240);
	Dibujar(10,170,10,200,30,210);
	Dibujar(250,270,410,270,330,350);
	Dibujar(230,260,320,350,230,440);
	Dibujar(210,270,210,440,130,440);
	Dibujar(230,460,130,460,230,550);
	Dibujar(250,450,250,550,360,510);
	glFlush();
}

void IniciarConfiguracion() {
	glClearColor(1, 0, 1, 1);
	glLineWidth(3.0);
	glOrtho(0, 450, 0, 600, 1, -1);
}

int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(450, 600);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Practica #05");
	glutDisplayFunc(DibujarArdilla);
	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}
