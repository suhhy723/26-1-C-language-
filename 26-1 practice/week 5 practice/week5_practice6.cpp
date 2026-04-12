#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
	int num, is_prime = 1;
	printf("정수를 입력하세요: ");
	scanf("%d", &num);
	if (num <= 1) {
		is_prime = 0;
	}
	else {
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				is_prime = 0;
				break;
			}
		}
	}
	if(is_prime) {
		printf("%d는 소수입니다.\n", num);
	}
	else {
		printf("%d는 소수가 아닙니다.\n", num);
	}

	return 0;




}