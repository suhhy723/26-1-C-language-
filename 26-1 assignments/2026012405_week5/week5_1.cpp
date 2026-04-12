#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
    int a, b, c;

    printf("두 정수 입력: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    printf("최대공약수: %d\n", a);

    return 0;
}