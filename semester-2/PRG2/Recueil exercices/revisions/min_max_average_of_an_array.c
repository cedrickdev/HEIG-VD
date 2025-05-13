#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

     void show_statistics(const int *tab,int size) {
         int sum = 0;
         int min = tab[0];
         int max = tab[0];

         for (int i=0; i<size; ++i) {
             sum += tab[i];
             if (tab[i] < min) min = tab[i];
             if (tab[i] > max) max = tab[i];
         }
         float average = (float)sum / size ;

         printf("\nNombre d'élements : %d", size);
         printf("\nMaximum : %d", max);
         printf("\nMinimum : %d", min);
         printf("\nMoyenne : %.2f", average);
         printf("\n");
     }


 int main() {

         int *tab = NULL;
         int size = 0;
         int n;
         bool menu = true;

         printf("Combien d'entiers souhaitez vous saisir ? : ");
        if (scanf("%d",&size) != 1 && size <= 0) {
            printf("Erreur: nombre invalide.\n");
            return 1;
        }

         tab = (int*)malloc(size * sizeof(int));
         if (tab == NULL) {
             printf("Erreur: allocation de mémoire impossible.\n");
             return 1;
         }

         printf("Entrez les %d nombres : \n", size);
          for (int i=0; i < size; ++i) {
              printf("Entier %d : ", i+1);
             if (scanf("%d",&tab[i]) != 1) {
                 printf("Erreur: nombre invalide.\n");
                 free(tab);
                 return 1;
             }
          }

        show_statistics(tab,size);



         while (menu) {
             printf("\nQue souhaitez-vous faire ?\n");
             printf("1. Ajouter des nombres\n");
             printf("2. Afficher les statistiques\n");
             printf("3. Quitter\n");
             printf("Votre choix : ");

             int choice;

             if (scanf("%d",&choice) != 1 ){
             printf("Erreur: nombre invalide.\n");
                 while (getchar() != '\n');
             continue;
             }

             switch (choice) {
                 case 1:

                     printf("Combien d'entiers souhaitez vous saisir ? : ");
                   if (scanf("%d",&n) != 1 && n <= 0) {
                     printf("Erreur: nombre invalide.\n");
                     return 1;
                 }

                 int *new_array = (int*)realloc(tab, (size + n) * sizeof(int));
                 if (new_array == NULL) {
                     free(tab);
                     printf("Erreur: allocation de mémoire impossible.\n");
                     return 1;
                 }

                 tab = new_array;


                 printf("Entrez les %d nombres : \n", n);
                 for (int i=0; i < n; ++i) {
                     printf("Entier %d : ", (size) + (i+1));
                     if (scanf("%d",&tab[size + i]) != 1) {
                         printf("Erreur: nombre invalide.\n");
                         free(tab);
                         return 1;
                     }
                 }
                 show_statistics(tab,size + n);
                 break;
                 case 2:
                     show_statistics(tab,size);
                 break;
                 case 3: menu = false;
                 break;

                 default: printf("Erreur: nombre invalide.\n");
                   return 1;

             }
         }

    free(tab);
    return 0;
}