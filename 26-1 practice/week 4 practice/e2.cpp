#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");

	double input;
	printf("실수를 입력하세요:");
	scanf("%lf", &input);

	int converted = input;

	printf("원래 값: %f\n", input);
	printf("변환된 값(int) %d\n", converted);
	printf("손실된 데이터: %f\n", input - converted);

	return 0;

}