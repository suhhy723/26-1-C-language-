#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	int arr[5];
	int max;
	printf("다섯개의 정수를 입력하세요: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	for (int j = 1; j < 5; j++) {
		if (arr[j] > max) {
			max = arr[j];
		}
	}
	printf("최댓값: %d\n", max);
	return 0;

}