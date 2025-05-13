#include<stdio.h>



/*Écrire un programme en C qui demande à l'utilisateur de saisir des nombres
 jusqu'à ce qu'il saisisse 0. Après quoi, le programme affiche la somme des nombres saisis.*/


/*
int main() {
 int i;
 int sum = 0;

 printf(" Entrez les nombres pour additionner (0 pour terminer) :\n");
 scanf("%d", &i);

 while (i != 0) {
  sum += i;
  scanf("%d", &i);
 }
 printf("la somme des nombres est : %d", sum);

 return 0;
}*/


/* Écrire un programme qui utilise une boucle while pour déterminer et
 afficher le plus grand nombre d'une série de nombres saisis par
 l'utilisateur. L'utilisateur saisit des nombres jusqu'à ce qu'il saisisse -1*/


int main() {
 int nombre, max = 0;

 printf(" Entrez les nombres pour additionner (-1 pour terminer) :\n");
 scanf("%d", &nombre);

 max = nombre;

 while (nombre != -1) {
  if (nombre > max) {
   max = nombre;
  }
  scanf("%d", &nombre);
 }
 printf("Le plus grand nombre est: %d", max);
 return 0;
}
