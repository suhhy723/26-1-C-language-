#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	int score;
	int sum = 0;
	float avg;

	printf("다섯명의 성적을 입력하세요: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score);
		sum += score;
	}

	avg = float(sum) / 5;
	printf("총점: %d\n", sum);
	printf("평균: %.2f\n", avg);

	return 0;



}