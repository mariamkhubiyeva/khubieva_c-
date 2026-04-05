#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");

    putc('A', fp);
    putc('B', fp);
    putc('C', fp);

    fclose(fp);

    fp = fopen("test.txt", "r");

    char ch;
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}