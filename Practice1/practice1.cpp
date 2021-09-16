#include <iostream>
#include "GL/freeglut.h"



void display()
{

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);

	//윈도우 사이즈 변경
	glutInitWindowSize(512, 512);

	// top-left corner 초기 포지션으로 초기화
	glutInitWindowPosition(0, 0);

	// 윈도우창 생성
	glutCreateWindow("Hello World");




	glutDisplayFunc(display);


	// glut의 이벤트 프로세싱 loop을 시작.
	glutMainLoop();

	return 0;
}
