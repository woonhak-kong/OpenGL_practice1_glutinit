#include <iostream>
#include "GL/freeglut.h"



void display()
{

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);

	//������ ������ ����
	glutInitWindowSize(512, 512);

	// top-left corner �ʱ� ���������� �ʱ�ȭ
	glutInitWindowPosition(0, 0);

	// ������â ����
	glutCreateWindow("Hello World");




	glutDisplayFunc(display);


	// glut�� �̺�Ʈ ���μ��� loop�� ����.
	glutMainLoop();

	return 0;
}
