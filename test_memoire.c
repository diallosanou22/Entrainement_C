#include <stdio.h>

int main() {
    char lettre = 'Z';
    char *pointeur_lettre = &lettre;

    printf("La lettre est : %c\n", *pointeur_lettre);
    printf("Elle habite a l'adresse : %p\n", pointeur_lettre);

    return 0;
}
