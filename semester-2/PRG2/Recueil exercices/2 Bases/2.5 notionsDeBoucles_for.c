#include<stdio.h>

/*Écrire un programme en C qui utilise une boucle for pour imprimer les
 10 premiers nombres de la table de multiplication de 5.*/

/*
int main() {
    int i;

    for (i = 1; i <= 10; ++i) {
     printf("5 * %d = %d\n", i, 5 * i);
    }

    return 0;
}*/

/*Écrire un programme en C qui utilise une boucle for pour calculer la somme des
 100 premiers nombres naturels ``(1+2+3+4+...+100)`. */


int main() {
 int i;
 int somme = 0;

 for (i = 0; i <= 100; ++i) {
  somme += i;
 }
 printf("La somme est: %d", somme);
 return 0;
}
