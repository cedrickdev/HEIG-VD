#include <stdio.h>

 int main() {

     char st[50];
     int age;

     printf("Entrez votre prénom : ");
     scanf("%s", st);

     printf("Entres votre age : ");
     scanf("%d", &age);

     printf("Bienvenue %s, %i" ,st, age);
     return 0;
 }