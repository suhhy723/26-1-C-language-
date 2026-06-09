#include <stdio.h>
#include <locale.h>
#include <windows.h>
#pragma warning(disable:4996)
#include <stdlib.h>

int main(int argc, char* argv[])
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");
    if (argc != 3) {
        printf("사용법: %s srcfile dstfile\n", argv[0]);
        return 1;
    }

    
    FILE* src = fopen(argv[1], "r");
    if (src == NULL) {
        printf("srcfile 열기 실패: %s\n", argv[1]);
        return 1;
    }

    FILE* dst = fopen(argv[2], "a");
    if (dst == NULL) {
        printf("dstfile 열기 실패: %s\n", argv[2]);
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);

    printf("추가된 파일 내용 출력: -->\n");

    FILE* result = fopen(argv[2], "r");
    if (result == NULL) {
        printf("결과 파일 열기 실패\n");
        return 1;
    }

    while ((ch = fgetc(result)) != EOF) {
        putchar(ch);
    }

    fclose(result);

    return 0;
}