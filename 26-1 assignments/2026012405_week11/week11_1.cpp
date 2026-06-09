#include <stdio.h>

int main(void) {
    double a[] = { 2.1, 5.1, 1.5, 3.3, 4.0 };
    int size = sizeof(a) / sizeof(a[0]);

    double* p;
    double* min_p = a;

    for (p = a; p < a + size; p++) {
        if (*p < *min_p) {
            min_p = p;
        }
    }

    printf("Index: %d, Value: %.1f\n", (int)(min_p - a), *min_p);

    return 0;
}