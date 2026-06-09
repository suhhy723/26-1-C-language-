#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)
#include <locale.h>
#include <windows.h>

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");
    char str1[200]; 
    char str2[100];

    printf("첫 번째 문자열: ");
    gets_s(str1, sizeof(str1));

    printf("두 번째 문자열: ");
    gets_s(str2, sizeof(str2));

    
    int i = strlen(str1); 

  
    int j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("결과: %s\n", str1);

    return 0;
}