#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	unsigned int number;
	printf("8비트로 표현가능한 양수를 적어주세요:");
	scanf(" %u", &number);
	number = number & 255;

	printf("%u", (number >> 7) & 1);
	printf("%u", (number >> 6) & 1);
	printf("%u", (number >> 5) & 1);
	printf("%u", (number >> 4) & 1);
	printf("%u", (number >> 3) & 1);
	printf("%u", (number >> 2) & 1);
	printf("%u", (number >> 1) & 1);
	printf("%u", (number >> 0) & 1);


	return 0;
}
