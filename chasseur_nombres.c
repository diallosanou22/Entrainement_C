#include <stdio.h>
#include <stdlib.h>

int main() {
    long long N = 100000; 
    long long nombre_secret = 42042; // Le nombre que le stagiaire a effacé
    long long taille_reelle = N - 1;

    // ---------------------------------------------------------
    // MISSION 1 : ALLOCATION DYNAMIQUE
    // ---------------------------------------------------------
    // Réserve un tableau dynamiquement pour 'taille_reelle' cases.
    // Attention : le type n'est plus 'int' mais 'long long' !
    long long *tableau = malloc(sizeof(long long)* taille_reelle);
    if (tableau == NULL){
        exit(1);
    }


    // ---------------------------------------------------------
    // SIMULATION DU PROBLÈME (Ne touche pas à cette partie)
    // ---------------------------------------------------------
    long long index = 0;
    for (long long i = 1; i <= N; i++) {
        if (i != nombre_secret) {
            tableau[index] = i;
            index++;
        }
    }

    // ---------------------------------------------------------
    // MISSION 2 : TON ALGORITHME O(N)
    // ---------------------------------------------------------
    
    // Étape A : Calcule la somme théorique (Formule de Gauss)
    // Astuce : La formule est N * (N + 1) / 2
    long long somme_theorique = (N * (N + 1))/2;

    // Étape B : Calcule la somme réelle du tableau
    long long somme_reelle = 0;
    for(long long i = 0; i < taille_reelle;i++){
        somme_reelle = tableau[i] + somme_reelle;
    }

    // Étape C : Trouve le coupable
    long long resultat = somme_theorique - somme_reelle;

    printf("L'algorithme a retrouve le nombre manquant : %lld\n", resultat);

    // ---------------------------------------------------------
    // MISSION 3 : LE NETTOYAGE
    // ---------------------------------------------------------
    // Libère la mémoire du Tas
    free(tableau);

    return 0;
}