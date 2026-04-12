#include<stdio.h>
#pragma warning(disable:4996)
#include<locale.h>
#include<windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");

    int score[3][3];

    for (int i = 0; i < 3; i++) {
        printf("학생 %d (국어 영어 수학): ", i + 1);
        scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);
    }

    printf("\n--- 학생별 총점 ---\n");
    for (int i = 0; i < 3; i++) {
        int total = 0;
        for (int j = 0; j < 3; j++)
            total += score[i][j];
        printf("학생 %d: %d점\n", i + 1, total);
    }

    printf("\n--- 과목별 평균 ---\n");

    int sum = 0;
    for (int i = 0; i < 3; i++) sum += score[i][0];
    printf("국어: %.1f점\n", (float)sum / 3);

    sum = 0;
    for (int i = 0; i < 3; i++) sum += score[i][1];
    printf("영어: %.1f점\n", (float)sum / 3);

    sum = 0;
    for (int i = 0; i < 3; i++) sum += score[i][2];
    printf("수학: %.1f점\n", (float)sum / 3);

    return 0;
}
   