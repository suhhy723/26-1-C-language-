#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	int n;
	printf("출력할 층수 (n) 를 입력하세요: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;






}
