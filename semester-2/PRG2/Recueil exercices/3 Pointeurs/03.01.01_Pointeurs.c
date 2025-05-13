/*
Écrivez un programme en langage C qui :

Déclare une variable nombre de type int et lui attribue une valeur entière de votre choix.
Déclare un pointeur ptr vers un entier.
Affecte à ce pointeur l'adresse de la variable nombre.
Affiche la valeur de nombre à l'aide du pointeur ptr.
Votre programme devrait donc :

Déclarer une variable entière.
Déclarer un pointeur vers un entier.
Affecter l'adresse de la variable entière au pointeur. Utiliser le pointeur pour accéder à la valeur de la variable entière et l'afficher.
*/

#include<stdio.h>

int main(){
    int num = 10;
    int *ptr;

   ptr = &num;

    
     printf("Le valeur du pointeur est %d\n", *ptr);

}
