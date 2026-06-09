#include <stdio.h>
#include <ctype.h>
#pragma warning(disable:4996)
#include <locale.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");
    char str[200];
    int i = 0;

    printf("영어 문장을 입력하세요 >> ");
    gets_s(str, sizeof(str));

    printf("입력한 문자열에서 대문자와 소문자를 반대로 변환하면 >> \n");

    while (str[i] != '\0') {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}