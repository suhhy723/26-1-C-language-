#include <stdio.h>
#pragma warning(disable:4996)
#include <locale.h>
#include <windows.h>


int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");

    char str[100];
    int len = 0;

    printf("문자열 입력: ");
    gets_s(str, sizeof(str));

    while (str[len] != '\0') {
        len++;
    }

    printf("길이: %d\n", len);

    return 0;
}