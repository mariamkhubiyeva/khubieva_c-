
#include <stdio.h>
#include <stdlib.h>

int max(int *arr, int n) {
    int m = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > m) m = arr[i];
    return m;
}

int min(int *arr, int n) {
    int m = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < m) m = arr[i];
    return m;
}

int sum(int *arr, int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += arr[i];
    return s;
}

int main() {
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Max = %d\n", max(arr, n));
    printf("Min = %d\n", min(arr, n));
    printf("Sum = %d\n", sum(arr, n));

    free(arr);
    return 0;
}