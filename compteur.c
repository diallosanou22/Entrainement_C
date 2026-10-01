#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compter_lettres(char *texte){
    int i = 0;
    while(texte[i] != '\0'){
        i++;

    }
    return i;
    

}

int main(){
  
    /*int compteur = 0;
    int i = 0;

    while(mot[i] != '\0'){
        compteur = compteur + 1;
        i++;
    }
    printf("la taille du mamadou est %d\n",compteur);
    */
   
    char mot[] = "Mamadou";
    int taille_lettre = compter_lettres(mot);
    printf("le mot %s contient %d lettres\n",mot,taille_lettre);
    return 0;
}