/*
Déclare deux variables nom et age.
Déclare un pointeur ptr_nom qui pointe sur nom.
Déclare un pointeur ptr_age qui pointe sur age.
Déclare un double pointeur ptr_ptr_nom qui pointe sur ptr_nom.
Déclare un double pointeur ptr_ptr_age qui pointe sur ptr_age.
Utilisez les double pointeurs ptr_ptr_nom et ptr_ptr_age pour remplir les variables nom et age respectivement avec des valeurs que vous choisissez.
Affichez ensuite les valeurs de nom et age.
Votre programme devrait donc :

Déclarer deux variables nom et age.
Déclarer deux pointeurs ptr_nom et ptr_age.
Déclarer deux double pointeurs ptr_ptr_nom et ptr_ptr_age.
Utiliser les double pointeurs pour affecter des valeurs à nom et age.
Afficher les valeurs de nom et age.

*/


#include<stdio.h>

int main(){

    char nom[5];
    int age;

    char *ptr_nom = nom;
    int *ptr_age = &age;

    char **ptr_ptr_nom = &ptr_nom;
    int **ptr_ptr_age = &ptr_age;

  
   printf("Entrez un nom  : "); 
   scanf("%5s", *ptr_ptr_nom);

   printf("Entrez un age  : "); 
   scanf("%d", *ptr_ptr_age);
   

    printf("le nom c'est: %s\n", nom);
    printf("l'age est: %d\n", age);
     
return 0;

}
