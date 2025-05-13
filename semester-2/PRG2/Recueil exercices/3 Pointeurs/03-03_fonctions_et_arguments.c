#include <stdio.h>

#define TAILLE 5  // Taille des tableaux

/**
 * @brief Calcule la somme élément par élément de deux tableaux et stocke
 * le résultat dans un troisième tableau.
 *
 * @param taille La taille des tableaux.
 * @param tab1 Le premier tableau à additionner.
 * @param tab2 Le deuxième tableau à additionner.
 * @param result Le tableau où la somme sera stockée.
 */
void somme_tableau(int taille, const int *tab1, const int *tab2, int *result) {
    int i;
    for (i = 0; i < taille; i++) {
        result[i] = tab1[i] + tab2[i];
    }
}

/**
 * @brief Affiche les éléments d'un tableau.
 *
 * @param taille La taille du tableau.
 * @param tab Le tableau à afficher.
 */
void afficher_tableau(int taille, const int *tab) {
    int i;
    for (i = 0; i < taille; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main() {
    int tab1[TAILLE], tab2[TAILLE], result[TAILLE];
    int i;

    // Saisie des éléments du premier tableau
    printf("Entrez les éléments du premier tableau :\n");
    for(i = 0; i < TAILLE; i++) {
        scanf("%d", &tab1[i]);
    }

    // Saisie des éléments du deuxième tableau
    printf("Entrez les éléments du deuxième tableau :\n");
    for(i = 0; i < TAILLE; i++) {
        scanf("%d", &tab2[i]);
    }

    // Calcul de la somme des tableaux
    somme_tableau(TAILLE, tab1, tab2, result);

    // Affichage des trois tableaux
    printf("Premier tableau : ");
    afficher_tableau(TAILLE, tab1);

    printf("Deuxième tableau : ");
    afficher_tableau(TAILLE, tab2);

    printf("Résultat (somme) : ");
    afficher_tableau(TAILLE, result);

    return 0;
}
