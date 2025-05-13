#include <stdio.h>

// Exercice 1

/*
int main() {

  int jour;
    printf("Saisir le numéro du jour : ");
    scanf("%d", &jour);

    switch (jour) {
        case 1 : printf("Lundi");break;
        case 2 : printf("Mardi");break;
        case 3 : printf("Mecredi");break;
        case 4 : printf("Jeudi");break;
        case 5 : printf("Vendredi");break;
        case 6 : printf("Samedi");break;
        case 7 : printf("Dimanche");break;
        default: printf("Erreur de saisie");break;
    }

    return 0;
}
*/


int main() {

    int a, b, result;
    char op;
    printf("Saisir une operation à faire : ");
    scanf("%d %c %d", &a, &op, &b );

     switch (op) {
         case '+' : result = a + b; break;
         case '-' : result = a - b; break;
         case '*' : result = a * b; break;
         case '/' : result = a / b; break;
         default: printf(" Erreur de saisie"); return -1;
     }

    printf("%d %c %d  = %d", a, op, b, result );
    return 0;
}
