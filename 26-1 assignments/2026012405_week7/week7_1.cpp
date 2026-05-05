#include <stdio.h>
#pragma warning(disable:4996)
#include <locale.h>
#include <windows.h>


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, ".UTF8");

    int a, b;
    printf("두 정수 입력: ");
    scanf("%d %d", &a, &b);
    printf("최대공약수: %d\n", gcd(a, b));
    return 0;
}