#include <stdio.h>

struct Student {
    char name[20];
    int age;
    float avg_score;
};

int main() {
    struct Student students[5];

    
    printf("Введите 5 студентов (имя age avg_score):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, 
&students[i].avg_score);
    }

    
    printf("Все студенты:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s, %d лет, %.2f\n",
               i+1, students[i].name, students[i].age, 
students[i].avg_score);
    }

    
    int imax = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].avg_score > students[imax].avg_score) {
            imax = i;
        }
    }
    printf("Лучший студент: %s, %.2f\n", students[imax].name, 
students[imax].avg_score);

    return 0;
}
