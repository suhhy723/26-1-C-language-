#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
        int a;
        int b = 0;
        int c = 1;

        printf("양의 정수 입력: ");
        scanf("%d", &a);

        while (a > 0) {
            b = b + (a % 2) * c;
            a = a / 2;
            c = c * 10;
        }

        printf("2진수: %d\n", b);

        return 0;
    

}