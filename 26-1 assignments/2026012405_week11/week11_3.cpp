#include <stdio.h>

int main(void) {
    int a[] = { 11, 22, 33, 44, 55, 66 };
    int size = sizeof(a) / sizeof(a[0]);

    int* p = a;
    int* q = a + size - 1;
    int dummy;

    while (p < q) {
        dummy = *p;
        *p = *q;
        *q = dummy;
        p++;
        q--;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}