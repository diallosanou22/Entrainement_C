#include <stdio.h>
#include <stdlib.h>


void triplepointeur(int *valeur){
   *valeur = *valeur * 3;
   printf("la valeur du triple est %d\n",*valeur);
}
int main() {
   /* char lettre = 'Z';
    char *pointeur_lettre = &lettre;

    printf("La lettre est : %c\n", *pointeur_lettre);
    printf("Elle habite a l'adresse : %p\n", pointeur_lettre);
    

    int tableau[10];
    for(int i = 0; i < 10 ; i++){
        tableau[i] = i + 1;
        printf("[%d]\t",tableau[i]);
    }
        */


    int valeur = 10;
    triplepointeur(&valeur);
    printf("la valeur dans le main est %d\n",valeur);

    return 0;
}
