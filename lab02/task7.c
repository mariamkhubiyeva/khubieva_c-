#include <stdio.h>

enum course {
    first = 1,
    second,
    third,
    fourth
};

struct student {
    char name[50];
    int age;
    enum course course;
    float average_grade;
};

int strings_are_equal(const char *first_string, const char *second_string) {
    int i = 0;

    while (first_string[i] != '\0' && second_string[i] != '\0') {
        if (first_string[i] != second_string[i]) {
            return 0;
        }
        i++;
    }

    return first_string[i] == second_string[i];
}

void print_course(enum course course) {
    switch (course) {
        case first:
            printf("1 курс");
            break;
        case second:
            printf("2 курс");
            break;
        case third:
            printf("3 курс");
            break;
        case fourth:
            printf("4 курс");
            break;
        default:
            printf("неизвестный курс");
            break;
    }
}

void add_student(struct student *students, int *count) {
    if (*count >= 100) {
        printf("список студентов заполнен.\n");
        return;
    }

    printf("введите имя, возраст, курс (1-4), средний балл: ");
    scanf("%49s %d %d %f",
          students[*count].name,
          &students[*count].age,
          (int *)&students[*count].course,
          &students[*count].average_grade);

    (*count)++;
    printf("студент добавлен.\n");
}

void print_students(const struct student *students, int count) {
    if (count == 0) {
        printf("список студентов пуст.\n");
        return;
    }

    printf("\nсписок студентов:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. имя: %s, возраст: %d, курс: ",
               i + 1, students[i].name, students[i].age);
        print_course(students[i].course);
        printf(", средний балл: %.2f\n", students[i].average_grade);
    }
}

void find_student_by_name(const struct student *students, int count, const char *name) {
    int found = 0;

    for (int i = 0; i < count; i++) {
        if (strings_are_equal(students[i].name, name)) {
            printf("найден студент: имя: %s, возраст: %d, курс: ",
                   students[i].name, students[i].age);
            print_course(students[i].course);
            printf(", средний балл: %.2f\n", students[i].average_grade);
            found = 1;
        }
    }

    if (!found) {
        printf("студент с именем %s не найден.\n", name);
    }
}

void sort_students_by_average_grade(struct student *students, int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (students[j].average_grade < students[j + 1].average_grade) {
                struct student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

    printf("студенты отсортированы по среднему баллу.\n");
}

int main() {
    struct student students[100];
    int count = 0;
    int choice;
    char search_name[50];

    do {
        printf("\nменю:\n");
        printf("1. добавить студента\n");
        printf("2. вывести список студентов\n");
        printf("3. поиск студента по имени\n");
        printf("4. сортировка по среднему баллу\n");
        printf("0. выход\n");
        printf("выберите действие: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_student(students, &count);
                break;
            case 2:
                print_students(students, count);
                break;
            case 3:
                printf("введите имя для поиска: ");
                scanf("%49s", search_name);
                find_student_by_name(students, count, search_name);
                break;
            case 4:
                sort_students_by_average_grade(students, count);
                break;
            case 0:
                printf("программа завершена.\n");
                break;
            default:
                printf("неверный выбор. попробуйте снова.\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
