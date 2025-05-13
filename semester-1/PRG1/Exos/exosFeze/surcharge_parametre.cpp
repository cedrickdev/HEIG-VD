#include <iostream>

using namespace std;

void fct (int, float){cout << "Function no 1" << endl;}
void fct (int, double){cout << "Function no 2" << endl;}
void fct (float&, int&){cout << "Function no 3" << endl;}
void fct (const float&, const int&){cout << "Function no 4" << endl;}


int main() {

    int             i = 1;
    int&           ri = i;
    char            c = 'A';
    float           f = 2.f;
    double          d = 3.0;
    const double& rdC = d;

   // fct(i, c); // Ambigue
   // fct(2.0, 1); // fxn 4
   // fct(i, f); // fxn1
   // fct(ri, f); // fxn1
   // fct(f, 1); // fxn 4
   // fct(i, d); // fxn 2
   //  fct(f, i); // fxn 3 et non 4 car La correspondance des paramètres se fait par la correspondance la plus précise possible des types et du statut des paramètres (par référence ou par valeur, const ou non const).
   //  fct(2.0, i); // fxn 4
}