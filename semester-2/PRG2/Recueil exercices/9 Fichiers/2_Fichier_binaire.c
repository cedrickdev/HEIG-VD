#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 256


int main(int argc, char const *argv[]) {
    if (argc != 2) {
        printf("Usage: %s \n", argv[0]);
        return 1;
    }

    FILE *fichier = fopen(argv[1], "r");
    if (fichier == NULL) {
        printf("Impossible de charger fichier %s", argv[1]);
        return 1;
    }

    // start reading

    char brand[MAXLEN];
    char destination[MAXLEN];
    int stock;
    float unit, total;


    while (fscanf(fichier, brand, destination, &stock, &unit, &total) == 5)
        printf("reading %s,%s,%.2f,%d,%.2f", brand, destination, unit, stock, total);
    fclose(fichier);

    return 0;
}

