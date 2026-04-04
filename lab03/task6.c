
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos, value;
    printf("Позиция и значение: ");
    scanf("%d %d", &pos, &value);

    arr = realloc(arr, (n + 1) * sizeof(int));

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = value;
    n++;

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}