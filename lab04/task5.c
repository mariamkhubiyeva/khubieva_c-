#include <stdio.h>

int main() {
    char str[100];

    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    FILE *fp = fopen("test.txt", "w");
    fputs(str, fp);
    fclose(fp);

    fp = fopen("test.txt", "r");

    fgets(str, sizeof(str), fp);
    printf("Из файла: %s", str);

    fclose(fp);
    return 0;
}