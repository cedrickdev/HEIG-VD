#include <stdlib.h>
#include <stdio.h>

#define WIDTH 7
#define HEIGHT 6

int main() {
    int array[WIDTH] [HEIGHT];
    int number;
    char ch;


    do{
        printf("Entrez le nombre de lignes: ");
        while (scanf("%d", &number) != 1) {
            printf("Erreur de saisie");
            while ((ch = getchar()) != '\n' && ch != EOF);

        }

    for (int i=0; i<HEIGHT; ++i) {
        for (int j=0; j<WIDTH; ++j) {
            array[i][j] = (i+1) * (j+1);
            printf("%d",  array[i][j]);
        }
        printf("\n");
    }
    }while (1);
    return 0;
}
