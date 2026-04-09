#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");

    fseek(fp, 5, SEEK_SET);

    char str[100];
    fgets(str, sizeof(str), fp);

    printf("%s", str);

    fclose(fp);
    return 0;
}