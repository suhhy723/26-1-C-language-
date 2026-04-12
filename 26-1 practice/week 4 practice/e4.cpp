#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");

	int year;
	printf("연도를 입력하세요: ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0)||(year %400 ==0)) {
		printf("%d년은 윤년입니다.\n", year);
	}
	else {
		printf("%d년은 평년입니다.\n", year);

	
	}

	return 0;








}