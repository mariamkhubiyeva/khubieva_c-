#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");

    char ch;
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }

    if (feof(fp)) {
        printf("\nДостигнут конец файла\n");
    }

    if (ferror(fp)) {
        printf("Ошибка чтения файла\n");
    }

    fclose(fp);
    return 0;
}