#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");

	for (int i = 1, j = 10; i <= 10 && j >= 1; i++, j--) {
		printf("i:%2d, j:%2d, 합: %d\n", i, j, i + j);


	}
	return 0;
}
