#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");

    int N;
    printf("양의 정수 입력: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {

        for (int j = 1; j <= N; j++) {

            printf("%d * %d = %d\n", i, j, i * j);

        }


    }

    return 0;

}