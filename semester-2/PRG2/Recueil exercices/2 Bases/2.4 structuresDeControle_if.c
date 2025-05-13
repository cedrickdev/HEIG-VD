#include <stdio.h>


// exercice 1

/*int main() {

   int a = 117;

    if (a % 3 && a % 13 == 0) {
        printf("true");
    }
        else {
            printf("false");
        };
    return 0;
}*/

// exercice 2

int main()
{
    int num1, num2, num3, max;

    /* Fournir les données d'entrée */
    printf("Saisir 3 nombres: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2)
    {
        if (num1 > num3) {
            /* si num1 > num2 et num1 > num3 */
            max = num1;
        } else {
            /* si num1 > num2 mais num1 > num3 est fausse */
            max = num3;
        }
    } else {
        if (num2 > num3) {
            /* Si num1 < num2 et num2 > num3 */
            max = num2;
        } else {
            /* si num1 < num2 et num2 > num3 */
            max = num3;
        }
    }

    /* afficher le résultat */
    printf("le maximum est = %d", max);

    return 0;
}