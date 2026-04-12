#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	int n;
	printf("출력할 단을 입력하세요: ");
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", n, i, n * i);
	}

	return 0;

}