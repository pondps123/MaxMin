#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void find_max_min(int* arr, int n_elems, int* max, int* min);
int main() {
    int n;
    printf("Array size : ");
    scanf("%d", &n);
    printf("Numbers : ");
    int arr[128];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, min;
    max = arr[0];
    min = arr[0];
    find_max_min(arr, n, &max, &min);
    return 0;
}
void find_max_min(int* arr, int n_elems, int* max, int* min) {
    int i;
    for (i = 0; i < n_elems; i++) {
        if (arr[i] > * max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
    printf("Max = %d, Min = %d", *max, *min);
}