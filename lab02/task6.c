#include <stdio.h>

union data {
    int number;
    float real;
    char letter;
};

enum data_type {
    type_int,
    type_float,
    type_char
};

struct value {
    union data d;
    enum data_type type;
};

void print_value(struct value x) {
    switch (x.type) {
        case type_int:
            printf("хранится int: %d\n", x.d.number);
            break;
        case type_float:
            printf("хранится float: %.2f\n", x.d.real);
            break;
        case type_char:
            printf("хранится char: %c\n", x.d.letter);
            break;
        default:
            printf("неизвестный тип\n");
            break;
    }
}

int main() {
    union data x;

    x.number = 25;
    printf("после записи int: %d\n", x.number);

    x.real = 3.14f;
    printf("после записи float: %.2f\n", x.real);
    printf("теперь как int: %d\n", x.number);

    x.letter = 'a';
    printf("после записи char: %c\n", x.letter);
    printf("теперь как float: %.2f\n", x.real);

    struct value first;
    struct value second;
    struct value third;

    first.d.number = 42;
    first.type = type_int;

    second.d.real = 5.75f;
    second.type = type_float;

    third.d.letter = 'z';
    third.type = type_char;

    printf("\nпримеры структуры с union:\n");
    print_value(first);
    print_value(second);
    print_value(third);

    return 0;
}
