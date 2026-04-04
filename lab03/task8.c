#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int *data;
    int size;
} List;


void add(List *list) {
    int value;
    printf("Введите значение: ");
    if (scanf("%d", &value) != 1) {
        printf("Ошибка ввода\n");
        return;
    }

    int *tmp = realloc(list->data, (list->size + 1) * sizeof(int));
    if (tmp == NULL) {
        printf("Ошибка памяти\n");
        return;
    }

    list->data = tmp;
    list->data[list->size++] = value;
}

void remove_item(List *list) {
    if (list->size == 0) {
        printf("Список пуст\n");
        return;
    }

    int index;
    printf("Введите индекс: ");
    if (scanf("%d", &index) != 1 || index < 0 || index >= list->size) {
        printf("Некорректный индекс\n");
        return;
    }

    for (int i = index; i < list->size - 1; i++)
        list->data[i] = list->data[i + 1];

    list->size--;

    int *tmp = realloc(list->data, list->size * sizeof(int));
    if (tmp != NULL || list->size == 0)
        list->data = tmp;
}

void print(List *list) {
    if (list->size == 0) {
        printf("Список пуст\n");
        return;
    }

    for (int i = 0; i < list->size; i++)
        printf("%d ", list->data[i]);
    printf("\n");
}

void exit_program(List *list) {
    free(list->data);
    printf("Выход...\n");
}


int main() {
    List list = {NULL, 0};

    // массив указателей на функции
    void (*actions[])(List*) = {
        exit_program,
        add,
        remove_item,
        print
    };

    int choice;

    do {
        printf("\n0. Выход\n1. Добавить\n2. Удалить\n3. Показать\n");
        printf("Выбор: ");

        if (scanf("%d", &choice) != 1 || choice < 0 || choice > 3) {
            printf("Ошибка выбора\n");
            while (getchar() != '\n'); // очистка буфера
            continue;
        }

        actions[choice](&list);

    } while (choice != 0);

    return 0;
}