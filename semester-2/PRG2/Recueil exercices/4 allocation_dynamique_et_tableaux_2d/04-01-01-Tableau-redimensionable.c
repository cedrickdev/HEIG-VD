#include <stdlib.h>
#include <stdio.h>

int main() {
    int *array = NULL;
    int number;
    int size = 2; // Taille initiale du tableau
    int count = 0; // Nombre d'éléments dans le tableau
    char ch;

    // Allouer initialement le tableau
    array = malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Erreur d'allocation de mémoire.\n");
        return 1;
    }

    // Demander à l'utilisateur d'entrer les valeurs
    do {
        printf("Entrez un entier positif (ou une lettre pour finir) : ");

        // Si la saisie échoue (utilisateur entre une lettre ou autre chose qu'un entier)
        if (scanf("%d", &number) != 1) {
            while ((ch = getchar()) != '\n' && ch != EOF); // Vider le buffer

            // Afficher le tableau actuel
            printf("Vous avez entre : ");
            for (int i = 0; i < count; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");

            break; // Sortir de la boucle si la saisie est incorrecte
        }

        // Si le tableau est plein, doubler sa taille
        if (count == size) {
            size *= 2; // Doubler la taille du tableau
            int *new_array = realloc(array, size * sizeof(int)); // Réallouer
            if (new_array == NULL) {
                printf("Erreur de réallocation de mémoire.\n");
                free(array);
                return 1;
            }
            array = new_array;
        }

        // Ajouter la valeur entrée à l'array
        array[count] = number;
        count++;
    } while (1);

    // Libérer la mémoire allouée avant de quitter
    free(array);
    return 0;
}
