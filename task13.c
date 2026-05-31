#include <stdio.h>
int main() {
    int sec;
    scanf("%d", &sec);
    int h = sec / 3600;
    sec %= 3600;
    int m = sec / 60;
    sec %= 60;
    printf("%02d:%02d:%02d\n", h, m, sec);
    return 0;
}
