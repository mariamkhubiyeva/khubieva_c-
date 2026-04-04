
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int index;
    printf("Удалить индекс: ");
    scanf("%d", &index);

    for (int i = index; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;
    arr = realloc(arr, n * sizeof(int));

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}