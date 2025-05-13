#include <stdio.h>    // printf, scanf
#include <stddef.h>   // size_t
#include <stdlib.h>   // calloc, free, malloc
#include <stdint.h>   // int64_t, signed 64-bit integer type
#include <inttypes.h> // SCNd64, decimal placeholder string for int64_t

// fonction qui demande d'entrer un nombre entier positif
size_t lire_size_t(const char *message) {

    // --- DEBUT PARTIE A COMPLETER -----------------------------------------------
    int64_t n;

    printf("%s", message);
    // lecture avec vérification d'un entier de type size_t
    while(scanf("%" SCNd64, &n) != 1 && n <= 0){
        printf("Erreur de saisie, entrez une entier positif");
        while(getchar() != '\n');
    }

    // --- FIN PARTIE A COMPLETER -------------------------------------------------
    return (size_t)n;
}

int main() {
    size_t lignes = 100;
    size_t colonnes = 100;
    int **tab;

    // --- DEBUT PARTIE A COMPLETER -----------------------------------------------

    // lecture des nombres de lignes et colonnes
    // pour que le programme n'ait à afficher que des nombres à 1, 2 ou 3 chiffres

    lignes = lire_size_t("Entrez le nombre de lignes: ");
    colonnes = lire_size_t("Entrez le nombre de colonnes: ");

    // allocation du tableau de tableaux
    tab = (int **)calloc(lignes, sizeof(int *));
    if (tab == NULL) {
        printf("Erreur d'allocation");
        return 1;
    }
      // allocation des tableaux pour chaque ligne
   for (size_t i = 0; i < lignes; ++i) {
       tab[i] = (int *)malloc(lignes * sizeof(int ));
       if (tab[i] == NULL) {
           printf("Erreur d'allocation");
           goto liberation;
       }
   }
      // remplissage avec les valeurs de la table de multiplication

    for (size_t i = 0; i < lignes; ++i) {
        for (size_t j = 0; j < colonnes; ++j) {
            tab[i][j] = (i + 1) * (j + 1);
        }
    }


      // affichage avec des colonnes bien alignées

    for (size_t i = 0; i < lignes; ++i) {
        for (size_t j = 0; j < colonnes; ++j) {
            tab[i][j] = (i + 1) * (j + 1);
            printf("%2d ", tab[i][j]);
        }
        printf("\n");
    }



      // --- FIN PARTIE A COMPLETER -------------------------------------------------
    liberation :
    for (size_t i = 0; i < lignes; ++i) {
        free(tab[i]);
    }

    free(tab);

    return 0;
  }
