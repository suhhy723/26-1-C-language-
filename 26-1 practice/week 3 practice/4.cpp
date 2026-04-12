#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	int a,h,min,sec;
	printf("초(second): ");
	scanf("%d", &a);
	h = a / 3600;
	min = (a % 3600) / 60;
	sec = (a % 3600) % 60;
	printf("%d초는 %d 시간%d분 %d초 입니다", a, h, min, sec);
	return 0;



}