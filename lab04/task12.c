#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p;

    printf("Введите имя: ");
    fgets(p.name, sizeof(p.name), stdin);

    printf("Введите возраст: ");
    scanf("%d", &p.age);

    FILE *fp = fopen("database.bin", "ab");

    if (fp == NULL) {
        printf("Ошибка открытия файла\n");
        return 1;
    }

    fwrite(&p, sizeof(p), 1, fp);
    fclose(fp);

    fp = fopen("database.bin", "rb");

    while (fread(&p, sizeof(p), 1, fp)) {
        printf("Имя: %sВозраст: %d\n", p.name, p.age);
    }

    fclose(fp);
    return 0;
}