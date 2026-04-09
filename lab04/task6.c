#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    FILE *fp = fopen("data.bin", "wb");
    fwrite(arr, sizeof(int), 5, fp);
    fclose(fp);

    int arr2[5];

    fp = fopen("data.bin", "rb");
    fread(arr2, sizeof(int), 5, fp);
    fclose(fp);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}