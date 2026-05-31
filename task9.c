#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    double f1 = pow(x, 2) + 2*x + 1;
    double f2 = pow(x + 1, 2) - pow(x - 1, 2);
    printf("%.2f %.2f\n", f1, f2);
    return 0;
}
