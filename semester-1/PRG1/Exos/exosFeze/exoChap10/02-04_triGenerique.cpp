/**
* @file 02-04_triGenerique.cpp.cpp
* @version 1.0.0
* @author TCHINDA FEZE Cedrick Vanel
* @date : 02.01.2025
* @brief :Ce programme permet de Trier ces tableaux en utilisant le tri par sélection.
*/
#include <iostream>
#include <cstdlib>
#include <span>
#include <array>
#include <vector>

using namespace std;

// Fonction qui trouve l'indice de l'élément minimal dans un tableau
template<typename T>
size_t indice_min(const T& v) {
     size_t imin = 0;

    for (size_t i = 1 ; i < v.size(); ++i)
        if (v[i] < v [imin])
            imin = i;
        return  imin;

}

// Fonction de tri par sélection utilisant span
template<typename T>
void tri( T& v) {
  span s(v);
    for (size_t i = 0; i < v.size(); ++i) {
        size_t i_min = i + indice_min(s.subspan(i));
        swap(v[i], v[i_min]);
    }
}

// Fonction pour afficher un tableau
template<typename T>
void afficher(const T& v) {
    for (const auto& el : v) {
        cout << el << " ";
    }
    cout << endl;
}


int main () {
    vector v      {6, 2, 8, 7, 1, 3};
    afficher(v); tri(v); afficher(v);

    array  a    {"chien"s, "chat"s, "souris"s, "poisson"s};
    afficher(a); tri(a); afficher(a);

    double t[6] = {6.1, 2.2, 8.3, 7.4, 1.5, 3.6};
    span s(t);
    afficher(s); tri(s); afficher(s);

    return EXIT_SUCCESS;
}