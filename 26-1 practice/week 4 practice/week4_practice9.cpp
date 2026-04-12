#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	int a, b, c;
	b = 0;
	for (int i = 1; i <= 5; i++) {
		printf("정수를 입력하세요");
		scanf("%d", &a);
		if (a < 0) {
			printf("양수만 입력가능합니다");

		}
		else if (a > 0) {
			b = b + a;
			c = a % 3;

			switch (c) {
			case 0:
				printf("3의 배수입니다.\n");
				break;
			case 1:
				printf("3으로 나누면 1이 남습니다.\n");
				break;
			case 2:
				printf("3으로 나누면 2가 남습니다.\n");
				break;
				
			}
			
		}

		else
			return 0;
	}

	printf("총합: %d", b);
	return 0;
}
