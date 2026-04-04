
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;

    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Новый размер: ");
    scanf("%d", &m);

    arr = realloc(arr, m * sizeof(int));

    for (int i = n; i < m; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < m; i++)
        printf("%d ", arr[i]);

    arr = realloc(arr, n * sizeof(int)); // уменьшение

    free(arr);
    return 0;
}