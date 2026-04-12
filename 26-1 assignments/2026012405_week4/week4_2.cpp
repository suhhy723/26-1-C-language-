#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
    float a, b;
    char op;

    printf("두 실수와 연산자를 붙여서 입력:\n");
    scanf("%f%c%f", &a, &op, &b);

    if (op == '+') {
        printf("%.2f + %.2f = %.2f\n", a, b, a + b);
    }
    else if (op == '-') {
        printf("%.2f - %.2f = %.2f\n", a, b, a - b);
    }
    else if (op == '*') {
        printf("%.2f * %.2f = %.2f\n", a, b, a * b);
    }
    else if (op == '/') {
        printf("%.2f / %.2f = %.2f\n", a, b, a / b);
    }
    else {
        printf("오류\n");
    }

    return 0;
}