/**
* @file 02-02_minimum.cpp.cpp
* @version 1.0.0
* @author TCHINDA FEZE Cedrick Vanel
* @date : 02.01.2025
* @brief :Ce programme permet d'Écrire une fonction min qui retourne le minimum de 3 valeurs de type quelconque reçues en paramètre.
*/
#include <iostream>
#include <cstdlib>

using namespace std;

template<typename T>
T& min(T& a,T& b,T& c ) {
 return a < b ? (a < c ? a : c) : (b < c ? b : c);
}

int main () {
    int    a = 5;
    int    b = 2;
    int    c = 9;

    double d = 5.0;
    double e = 2.0;
    double f = 9.0;

    min(a, b, c) = 1;
    int& min_abc = min(a, b, c);

    cout << min(d, e, f);
    min(d, e, f) = 1;
    double& min_def = min(d, e, f);
    cout << min(a, b, c);

    return EXIT_SUCCESS;
}