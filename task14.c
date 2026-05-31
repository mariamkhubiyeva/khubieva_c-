#include <stdio.h>
int main() {
    int a = 1, b = 2, c = 3;
    printf("a: %p\nb: %p\nc: %p\n", (void*)&a, (void*)&b, (void*)&c);
    printf("b-a: %ld\nc-b: %ld\n", (long)(&b - &a), (long)(&c - &b));
    return 0;
}

