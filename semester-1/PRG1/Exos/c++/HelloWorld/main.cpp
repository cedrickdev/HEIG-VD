#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;
int main()
{

    string msg = "Il fait beau dans la maison de feze";
    cout << msg << endl;
    cout << "Le premier charactere de la phrase en dessus est :"<< msg.at(0) << endl;   // afficher le charactère selon sa position
    cout << "La taille le phrase en memoire est :"<< sizeof(msg) << endl; // afficher la taille de la chaine

    int valeur; // Declaration d'une variable

    valeur = 18 + 2; // affectation d'une valeur a la variable

    cout << valeur << endl;  // afficher le contenu de la variable
    cout << "L'adresse memoire de 18 + 2 est :" << &valeur << endl; // afficher son addresse memoire que le contenu de la variable occupe

    float pi = 3.14f;  // Une constante donc sa valeur ne change pas dane une fonction, double est 64 bits
    double pi2 = 3.14; // Une constante donc sa valeur ne change pas dane une fonction, float est 32 bits
    cout << "la veux pi de type float est :" << pi << endl;
    cout << "la veux pi de type double est :" << pi2 << endl;

    char a = 'a'; // affectation d'une valeur a la variable

    cout << a << endl;      //
    cout << (int)a << endl; // a est probablement a la table 97 de la table ASCII

    bool maBoule = true;
    cout << boolalpha << maBoule << endl; // boolalapha est utilisé pour changer l'affichage du contenu de la variable
    cout << "La precision avec le type double : " << setprecision(20) << 1 / 0.3 << endl;
    cout << "La precision avec le type float  : " << setprecision(20) << 1.0f / 0.3f << endl;

    cout << "bonjour" << endl;
    cout << "bonjour" << 2 << endl;          // il ya decalage des octets sur l'adresse memoire
    cout << (const void *)"bonjour" << endl; // operateur de flux pour une adresse (void pointe sur l'addresse memoire)
    cout << (const void*)("bonjour" + 1) << endl; // pointe sur la prochaine l'addresse memoire de la chaine


   /* This part of the code is demonstrating the concept of pointers in C++. */
    int entier = 12;
    int *pointeur = &entier;

    cout << "contenu de entier  :" << entier << endl;
    cout << "addresse de entier : " << &entier << endl;

    cout << "contenu du pointeur :" << pointeur << endl;
    cout << "addresse du pointeur :" << &pointeur << endl;
    cout << "valeur referencee :" << *pointeur << endl;

    return EXIT_SUCCESS;
}
