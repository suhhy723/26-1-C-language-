#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");

    int arr1[2][4] = {
        {7,5,3,1},
        {2,4,6,8}
    };

    int arr2[4][3] = {
        {1,5,9},
        {2,6,10},
        {3,7,11},
        {4,8,12}
    };

    int arr3[2][3] = { 0 };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 4; k++) {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("결과 행렬 (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%5d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}