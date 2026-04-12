#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	
	int n1, n2, n3, max;
	printf("세 정수 입력:");
	scanf("%d %d %d", &n1, &n2, &n3);
	if ((n1 >= n2) && (n1 >= n3)) {
		max = n1;
	}
	else if ((n2 >= n1) && (n2 >= n3)) {
		max = n2;
	}
	else {
		max = n3;
	}
	printf("가장 큰 값:%d\n", max);
	

	return 0;
}