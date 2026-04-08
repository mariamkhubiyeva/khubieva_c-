#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float avg_score;
};

int main() {
    struct Student s;

    printf("Введите имя, возраст и средний балл: ");
    scanf("%s %d %f", s.name, &s.age, &s.avg_score);

    printf("Студент: %s, возраст %d, средний балл %.2f\n",
           s.name, s.age, s.avg_score);

    return 0;
}
