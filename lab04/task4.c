#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");

    fprintf(fp, "%d %s\n", 10, "Hello");
    fprintf(fp, "%d %s\n", 20, "World");

    fclose(fp);

    fp = fopen("test.txt", "r");

    int num;
    char str[50];

    while (fscanf(fp, "%d %s", &num, str) != EOF) {
        printf("%d %s\n", num, str);
    }

    fclose(fp);
    return 0;
}