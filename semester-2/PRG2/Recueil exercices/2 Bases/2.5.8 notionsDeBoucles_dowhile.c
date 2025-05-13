/*
Écrire un programme en C qui utilise une boucle do..while pour inverser les chiffres d'un nombre entier
saisi par l'utilisateur. Par exemple, si l'utilisateur saisit 123, le programme affiche 321.
*/
#include<stdio.h>

int main() {

  int nombre, inverse = 0;
  printf("Enter a number: ");
  scanf("%d",&nombre);

  do{
    inverse = (inverse * 10) + (nombre % 10);
     nombre = nombre / 10;
  }while(nombre > 0);

 printf("The reversible number is: %d",inverse);

 return 0;
}
