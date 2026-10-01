#include <stdio.h>
#include <stdlib.h>

int main(){

    char *texte = malloc(sizeof(char)*6);
    if (texte == NULL){exit(1);}
    texte[0] = 'S';
    texte[1] = 'a';
    texte[2] = 'l';
    texte[3] = 'u';
    texte[4] = 't';
    texte[5] = '\0';
    printf("le mot texte est rempli avec %s\n",texte);

    free(texte);
    return 0;
}