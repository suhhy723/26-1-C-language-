#pragma warning(disable:4996)
#include <stdio.h>
#include<locale.h>
#include<windows.h>

int main(void) {
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
	setlocale(LC_ALL, ".UTF8");

    int arr[145];  

   
    for (int i = 1; i <= 144; i++) {
        arr[i] = 1;
    }

   
    arr[1] = 0;

    for (int i = 2; i * i <= 144; i++) { 
        if (arr[i] == 1) {
            for (int j = i * i; j <= 144; j += i) {  
                arr[j] = 0;
            }
        }
    }

    
    printf("1~144 사이의 소수:\n");
    for (int i = 1; i <= 144; i++) {
        if (arr[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;

}