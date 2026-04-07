#include <stdio.h>

int main() {
    int n, i, j, a[100], t;

    printf("Введите размер массива: ");
    scanf("%d", &n);

    printf("Введите числа:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("Массив по возрастанию:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
