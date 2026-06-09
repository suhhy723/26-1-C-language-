#include <stdio.h>
#include <locale.h>
#include <windows.h>
#pragma warning(disable:4996)

int addbyvalue(int a, int b);
void addbyaddress(int* sum, int a, int b);

int addbyvalue(int a, int b)
{
    return a + b;
}

void addbyaddress(int* sum, int a, int b)
{
    *sum = a + b;
}

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");

    int a = 10;
    int b = 20;
    int result1;
    int result2;

    result1 = addbyvalue(a, b);
    printf("a = %d b = %d, sum: %d\n", a, b, result1);

    addbyaddress(&result2, a, b);
    printf("a = %d b = %d, sum: %d\n", a, b, result2);

    return 0;
}