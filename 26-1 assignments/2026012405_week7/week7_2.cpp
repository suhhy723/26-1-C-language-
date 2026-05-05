#include <stdio.h>
#pragma warning(disable:4996)
#include <locale.h>
#include <windows.h>

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[32], R[32];

    for (i = 0; i < n1; i++) L[i] = arr[left + i];
    for (j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    i = 0; j = 0; k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else               arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    int arr[32] = { 418, 73, 905, 261, 644, 119, 832, 557, 14, 390,
                    721, 968, 247, 685, 156, 874, 503, 92, 337, 780,
                    429, 651, 28, 999, 312, 546, 187, 763, 401, 850,
                    234, 678 };

    mergeSort(arr, 0, 31);

    for (int i = 0; i < 32; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}