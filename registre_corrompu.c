#include <stdio.h>
#include <stdlib.h>




int calculer_taille(char *texte){
    int i = 0;
    while(texte[i] != '\0'){
        i++;
    }
    return i;
}
int trouver_id_manquant(int *tableau,int taille_tableau){

    int N = taille_tableau + 1;

    int id_manquant = 0;
    int somme_attendu = (N * (N + 1))/2;

    int somme_théorique = 0;
    
    for(int i = 0; i < taille_tableau;i++){
        somme_théorique = somme_théorique + tableau[i];
    }

    id_manquant = somme_attendu - somme_théorique;


    return id_manquant; 



}


int main(){


    
    char registre[] = "1245678";
    int taille_texte = calculer_taille(registre);
    int *tableau_ids = malloc(sizeof(int) * taille_texte);
    if (tableau_ids == NULL){
        exit(1);
    }
    for(int i = 0 ; i < taille_texte ; i++){
        tableau_ids[i] = registre[i] - '0';
    }

    int id_manquant = trouver_id_manquant(tableau_ids,taille_texte);
    printf("l'identifiant manquant est %d\n",id_manquant);

    free(tableau_ids);



    return 0;
}