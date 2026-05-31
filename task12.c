#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int h = n / 100, t = (n / 10) % 10, u = n % 10;
    printf("%d  %d %d/n", h, t, u);
    return 0;
}
