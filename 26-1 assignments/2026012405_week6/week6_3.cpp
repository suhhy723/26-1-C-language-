#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");


    int arr[12] = { 37, 82, 14, 59, 6, 91, 43, 28, 75, 11, 64, 50 };
    
   
    for (int i = 0; i < 11; i++) {          
        for (int j = 0; j < 11 - i; j++) {  
            if (arr[j] > arr[j + 1]) {          
                int a = arr[j];              
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }

    
    printf("오름차순 정렬:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}