#include <iostream>

using namespace std;

 void additioner(int &a, int &b) {
     cout << a + b;
 }

int main() {
    int valeur = 6;
    int* addresse = &valeur;  // pointeur sur l'addresse de la valeur
    int a = 2;
    int b = 2;
    const double pi = 3.14;
    additioner(a,b);

    cout << "La valeur est :" << valeur << endl;
    cout << "L'addresse memoire de la valeur est :" << addresse << endl;
     cout << "La valeur de l'addresse memoire est :" << *addresse << endl;
     cout << "La valeur de pi :" << pi << endl;




}