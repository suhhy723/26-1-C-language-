#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");
    int score;
    printf("점수 입력 (0~100):");
    scanf("%d", &score);

    if (score > 100 || score < 0) {
        printf("잘못된 입력입니다.\n");
    }
    else if (score >= 90) {
        printf("등급: A\n");
    }
    else if (score >= 80) {
        printf("등급: B\n");
    }

    else if (score >= 70) {
        printf("등급: C\n");
    }

    else {
        printf("등급: F\n");
    }
    return 0;
}
