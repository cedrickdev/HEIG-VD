    // Programme 1
/*
*Voici ci-après un programme C à compléter pour compter les caractères dans un fichier texte.
Pour le compléter:
écrire la fonction countc() qui renvoie le nombre de caractères contenu dans le flux de texte passé en argument à la fonction,
ouvrir le fichier texte passé en argument à la commande.
*/



// *** TODO: counting functions

/*int countc(FILE *fichier) {
   int count = 0;
   while (fgetc(fichier) != EOF) {
       count++;
   }
   return count;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s file\n", argv[0]);
        return 1;
    }

    FILE *fin;

    // *** TODO: open file
     fin = fopen(argv[1], "r");
     if (fin == NULL) { // Vérification si le fichier s'ouvre correctement
         printf("Erreur lors de l'ouverture du fichier");
         return 1;
     }

    // count characters in file

    printf("%s contains %d characters\n", argv[1], countc(fin));

    fclose(fin);
    return 0;
}*/



// Programme 2
/*
Compléter le programme de l'exercice précédent pour qu'il compte également le nombre de mots.
NB: Les mots sont séparés par des espaces ou des retours à la ligne.
écrire une fonction countm() qui renvoie le nombre de mots dans le flux passé en argument de la fonction,
le fichier texte passé en argument à la commande doit être remis au début.
*/

#include <stdio.h>
#include <stdbool.h>

int countw(FILE *fichier) {
    int count = 0;
    int c;
    int curw = false;

     while ((c = fgetc(fichier)) != EOF)
         if (c == ' ' || c == '\t' || c == '\n')
             curw = false;
         else if (!curw) {
                 curw = true;
                 count++;
             }
    return count;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s file\n", argv[0]);
        return 1;
    }

    FILE *fin;

    // *** TODO: open file
    fin = freopen(argv[1], "r", fin);
    if (fin == NULL) { // Vérification si le fichier s'ouvre correctement
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

    // count characters in file

    printf("%s contains %d characters\n", argv[1], countw(fin));

    fclose(fin);
    return 0;
}