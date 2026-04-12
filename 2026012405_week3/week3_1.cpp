#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	printf("소문자를 입력하세요: ");
	char down;
	down = getchar();
	down = down - 32;
	putchar(down);

	return 0;


}
