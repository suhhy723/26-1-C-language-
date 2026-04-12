#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");

	int kor, eng, math, total;
	double avg;

	printf("국어, 영어, 수학 점수 입력: ");
	scanf_s("%d %d %d", &kor, &eng, &math);

	total = kor + eng + math;
	avg = total / 3;

	printf("총점: %d, 평균: %.2f\n", total, avg);
	return 0;
	}
