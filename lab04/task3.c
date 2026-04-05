#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");

    fputs("Первая строка\n", fp);
    fputs("Вторая строка\n", fp);

    fclose(fp);

    fp = fopen("test.txt", "r");

    char str[100];
    while (fgets(str, sizeof(str), fp)) {
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}