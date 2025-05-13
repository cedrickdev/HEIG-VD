#include <stdio.h>
#include <stdlib.h>
#define LIGNE 5
#define COLONNE 5

/**
 *
 * Créer un programme qui alloue dynamiquement une matrice carrée de dimension N×N
 * (N^2 saisi par l'utilisateur), la remplit avec les valeurs de 1 à N² en spirale, puis l'affiche.

 */
int main() {

    int **tab;

     tab = (int **)calloc(LIGNE, sizeof(int *));
    if (tab == NULL) {
        printf("Erreur d'allocation");
        return 1;
    }

     for (size_t i = 0; i < LIGNE; ++i) {
         tab[i] =(int *)malloc(COLONNE * sizeof(int));
         if ( tab[i] == NULL) {
             printf("Erreur d'allocation");
            goto liberation;
         }
     }

    for (size_t i = 0; i < LIGNE; ++i) {
        for (size_t j = 0; j < LIGNE; ++j) {
            tab[i][j] = i * j;

            printf("%2d ",  tab[i][j]);
        }
        printf("\n");
    }


    liberation :

    for (size_t i = 0; i < LIGNE; ++i) {
        free(tab[i]);
    }

    free(tab);
    return 0;
}
