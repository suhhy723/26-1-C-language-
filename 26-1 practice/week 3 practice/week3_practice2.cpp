#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

#define PI 3.141592

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	float r;
	printf("길이:");
	scanf("%f", &r);
	printf("넓이 = %.2lf\n", r * r * PI);
	printf("둘레 = %.2lf\n", r * 2 * PI);
	return 0;


}
