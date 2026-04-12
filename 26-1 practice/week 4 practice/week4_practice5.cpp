#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");
    double num1, num2;
    char op;

    scanf("%lf %c %lf", &num1, &op, &num2);

    switch (op) {
    case '+':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;

    case '/':
        if (num2 == 0) printf("0으로 나눌 수 없습니다\n");
        else
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        break;

    default:
        printf("잘못된 연산자입니다\n");
    }
    return 0;
}
