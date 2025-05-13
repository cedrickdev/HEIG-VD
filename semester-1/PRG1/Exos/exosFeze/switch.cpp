#include <iostream>

using namespace std;

int main () {
    cout << "entrer un numero entre 1 et 2 : ";
    int num;
    cin >> num;

    switch (num) {
        case 1 : cout << "Vous avez entre 1 (Un)";
         break;
        case 2 : cout << "Vous avez entre 2 (deux)";
         break;
        default: cout << "Vous deviez entrer un chiffre entre 1 et 2"   << endl;
    };

    return EXIT_SUCCESS;
}