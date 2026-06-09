#include <stdio.h>
#include <locale.h>
#include <windows.h>
#pragma warning(disable:4996)


double add(double a, double b) { return a + b; }
double sub(double a, double b) { return a - b; }
double mul(double a, double b) { return a * b; }
double dvd(double a, double b) { return a / b; }

int main(void) {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");

    double (*pfary[4])(double, double) = { add, sub, mul, dvd };
    char* opName[] = { "더하기", "빼기", "곱하기", "나누기" };
    char* opSym[] = { "+", "-", "*", "/" };

    int choice;
    double x, y;

    printf("사칙연산을 위해 각 연산에 대한 번호를 입력하세요. >>\n");
    printf("[더하기]: 0, [빼기]: 1, [곱하기]: 2, [나누기]: 3 >> ");
    scanf("%d", &choice);

    printf("\n사칙연산을 수행할 실수 2개를 입력하세요. >> ");
    scanf("%lf %lf", &x, &y);

    printf("\n문장: pfary[%d] 함수호출\n", choice);
    printf("%s 수행: %lf %s %lf == %lf\n",
        opName[choice], x, opSym[choice], y,
        pfary[choice](x, y));

    return 0;
}