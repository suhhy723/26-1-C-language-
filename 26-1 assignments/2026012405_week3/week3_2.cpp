#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	char UP;
	printf("대문자를 입력하세요: ");
	scanf(" %c", &UP);
	UP = UP + 32;
	printf(" %c", UP);

	return 0;


}