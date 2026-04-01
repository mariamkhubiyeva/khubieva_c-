#include <stdio.h>

enum Day {
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
};

struct Schedule {
    char subject[30];
    enum Day day;
};

void printDay(enum Day day) {
    switch (day) {
        case monday:
            printf("Понедельник");
            break;
        case tuesday:
            printf("Вторник");
            break;
        case wednesday:
            printf("Среда");
            break;
        case thursday:
            printf("Четверг");
            break;
        case friday:
            printf("Пятница");
            break;
        case saturday:
            printf("Суббота");
            break;
        case sunday:
            printf("Воскресенье");
            break;
        default:
            printf("Неизвестный день");
            break;
    }
}

int main() {
    enum Day today = wednesday;
    struct Schedule lesson = {"Programming", friday};

    printf("Сегодня: ");
    printDay(today);
    printf("\n");

    printf("Занятие по %s будет в ", lesson.subject);
    printDay(lesson.day);
    printf("\n");

    return 0;
}
