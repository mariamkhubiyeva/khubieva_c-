#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");

    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }

    printf("Файл успешно открыт\n");

    fclose(fp);
    return 0;
}