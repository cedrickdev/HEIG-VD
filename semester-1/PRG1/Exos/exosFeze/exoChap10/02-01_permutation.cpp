/**
* @file exo10_permutations.cpp
* @version 1.0.0
* @author TCHINDA FEZE Cedrick Vanel
* @date : 02.01.2025
* @brief :Ce programme met à disposition une fonction sans valeur de retour et prenant 3 paramètres de type
* quelconque permettant d'effectuer une permutation circulaire droite de ces 3 valeurs.
*/
#include <iostream>
#include <cstdlib>

using namespace std;

template<typename T>
void permutationCirculaire(T& a,T& b,T& c ) {
    T temp = c;
    c = b;
    b = a;
    a = temp;
}

template<typename T>
void afficher(const T& a,const T& b,const T& c ) {
    cout << a << " " << b << " " << c << endl;
}

int main () {

    int x = 1;
    int y = 2;
    int z = 3;

     permutationCirculaire(x,y, z);
     afficher(x, y ,z);
    return EXIT_SUCCESS;
}