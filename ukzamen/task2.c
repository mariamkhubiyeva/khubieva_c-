#include <stdio.h>
#include <stdlib.h>

struct Book {
    char nazvanie[50];
    char avtor[50];
    int yer;
    int cena;
};

int main() {
    int n, i;

    printf("Vvedite kolichestvo knig: ");
    scanf("%d", &n);

    struct Book *books;
    books = (struct Book*)malloc(n * sizeof(struct Book));

    for (i = 0; i < n; i++) {
        printf("\nKniga %d\n", i + 1);

        printf("Nazvanie: ");
        scanf("%s", books[i].nazvanie);

        printf("Avtor: ");
        scanf("%s", books[i].avtor);

        printf("God: ");
        scanf("%d", &books[i].yer);

        printf("Cena: ");
        scanf("%d", &books[i].cena);
    }

    printf("\nSpisok knig:\n");
    for (i = 0; i < n; i++) {
        printf("Nazvanie: %s\n", books[i].nazvanie);
        printf("Avtor: %s\n", books[i].avtor);
        printf("God: %d\n", books[i].yer);
        printf("Cena: %d\n", books[i].cena);
    }

    free(books);

    return 0;
}
