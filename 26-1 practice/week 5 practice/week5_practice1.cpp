#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>
int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");

	int num1, num2;
	char op;

	printf("식을 입력하세요(예:10 + 5):");
	scanf("%d %c %d", &num1, &op, &num2);

	switch (op) {
	case '+':
		printf("결과: %d\n", num1 + num2);
		break;
	case '-':
		printf("결과: %d\n", num1 - num2);
		break;
	case '*':
		printf("결과: %d\n", num1 * num2);
		break;
	case '/':
		if (num2 != 0) {
			printf("결과: %d\n", num1 / num2);
			break;

		}
		else {
			printf("0으로 나눌 수 없습니다.\n");
			break;
		}

	default:
		printf("유효하지 않은 연산자입니다.\n");
	}







	return 0;

}