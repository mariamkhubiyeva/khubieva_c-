
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    int n;
    scanf("%d", &n);

    Student *s = malloc(n * sizeof(Student));

    for (int i = 0; i < n; i++) {
        printf("Имя: ");
        scanf("%s", s[i].name);
        printf("Возраст: ");
        scanf("%d", &s[i].age);
    }

    int max = 0;
    for (int i = 1; i < n; i++)
        if (s[i].age > s[max].age)
            max = i;

    printf("Старший: %s %d\n", s[max].name, s[max].age);

    free(s);
    return 0;
}