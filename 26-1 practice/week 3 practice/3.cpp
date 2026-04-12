#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	char a;
	printf("문자하나: ");
	scanf(" %c", &a);
	printf("%c %d", a,a);
	return 0;
}