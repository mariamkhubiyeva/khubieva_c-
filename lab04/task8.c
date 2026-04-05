#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person people[2] = {
        {"Sasha", 17},
        {"Katya", 17}
    };

    FILE *fp = fopen("people.bin", "wb");
    fwrite(people, sizeof(struct Person), 2, fp);
    fclose(fp);

    struct Person people2[2];

    fp = fopen("people.bin", "rb");
    fread(people2, sizeof(struct Person), 2, fp);
    fclose(fp);

    for (int i = 0; i < 2; i++) {
        printf("%s %d\n", people2[i].name, people2[i].age);
    }

    return 0;
}