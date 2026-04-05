#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person p = {"Mariam", 16};

    FILE *fp = fopen("person.bin", "wb");
    fwrite(&p, sizeof(p), 1, fp);
    fclose(fp);

    struct Person p2;

    fp = fopen("person.bin", "rb");
    fread(&p2, sizeof(p2), 1, fp);
    fclose(fp);

    printf("Имя: %s, Возраст: %d\n", p2.name, p2.age);

    return 0;
}