#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	int arr[5];
	printf("다섯개의 정수를 입력하세요: ");

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	printf("역순으로 출력:");
	for (int j = 4; j >= 0; j--) {
		printf("%d ", arr[j]);
	}

	printf("\n");




	return 0;
}