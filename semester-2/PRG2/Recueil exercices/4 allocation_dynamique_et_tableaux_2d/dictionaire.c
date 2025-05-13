#include <stdio.h>
#include <stdlib.h>

#define W_SIZE 20
#define D_SIZE 50
#define SIZE 2

/**
 * @brief Créer un programme qui implémente un dictionnaire simple en utilisant un tableau dynamique de structures.
 * Chaque structure contient un mot et sa définition. Implémenter les fonctions pour ajouter, rechercher et supprimer des entrées.
 */

struct Dict {
     char word[W_SIZE];
     char definition[D_SIZE];
};

   void add_word(struct Dict *dict, const char *word, const char *definition) {
          int i = 0, index = 0;

       while (word[i] != '\0' &&  i < W_SIZE - 1 ) {
           dict[index].word[i] = word[i];
           i++;
       }
       dict[index].word[i] = '\0';

       i = 0;
       while (definition[i] != '\0' &&  i < D_SIZE - 1 ) {
           dict[index].definition[i] = definition[i];
           i++;
       }
       dict[index].definition[i] = '\0';
   }

  void display_word(struct Dict *dict) {

           printf("word : %s \n definition : %s", dict->word, dict->definition );

   }

int main() {
       struct Dict *dictionary;

        char word[W_SIZE], def[D_SIZE];

       printf("add a word : ");
       scanf("%s", word);

       printf("add a definition: ");
       scanf("%s", def);

       dictionary = (struct Dict *)malloc(SIZE * sizeof(struct Dict));
         if (dictionary == NULL) {
             printf("Alloc error");
             return 1;
         }

       add_word(dictionary, word, def);
       display_word(dictionary);


       free(dictionary);
       return 0;
   }