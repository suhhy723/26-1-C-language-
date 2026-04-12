#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");
    printf("문자를 입력하세요\n");
    char ch;
    ch = getchar();

    if (ch >= 97 && ch <= 122) {
        putchar(ch - 32);
    }

    else if (ch >= 65 && ch <= 90) {
        putchar(ch + 32);
    }
    else {
        printf("Not alphabet\n");
    }
	return 0;


}