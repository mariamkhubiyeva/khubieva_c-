#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Person {
    char name[20];
    struct Date birth;
};

int main() {
    struct Person persons[5];

    
    printf("Введите 5 человек (имя day month year):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %d %d", persons[i].name,
              &persons[i].birth.day,
              &persons[i].birth.month,
              &persons[i].birth.year);
    }

    
    printf("Все люди:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: %02d.%02d.%d\n",
               persons[i].name,
               persons[i].birth.day,
               persons[i].birth.month,
               persons[i].birth.year);
    }

    
    printf("Родились после 2000 года:\n");
    for (int i = 0; i < 5; i++) {
        if (persons[i].birth.year > 2000) {
            printf("%s: %02d.%02d.%d\n",
                   persons[i].name,
                   persons[i].birth.day,
                   persons[i].birth.month,
                   persons[i].birth.year);
        }
    }

    return 0;
}
