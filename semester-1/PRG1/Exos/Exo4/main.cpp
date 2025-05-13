// volume pyramide
/*
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

//------------------------------------------------------------
double volumePyramide(double longueur,
                      double largeur,
                      double hauteur) {
    return longueur * largeur * hauteur / 3.0;
}

//------------------------------------------------------------
void afficher(const string& texte,
              double valeur,
              int precision) {
    cout << fixed << setprecision(precision) << texte << valeur << endl;
}

//------------------------------------------------------------
int main() {
    afficher("volume pyramide 1 = ", volumePyramide(10, 3.5, 12), 1);
    afficher("volume pyramide 2 = ", volumePyramide(3.6, 2.4, 2.7), 1); // 7.8
    return EXIT_SUCCESS;
}
*/

 // Anee
/*
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

 bool estBissextile(int annee){

     return  (annee % 4 == 0 || annee % 400 == 0 and annee % 100 != 0 );
 }
     void afficher(int annee) {

       cout << annee << " "<< boolalpha << estBissextile(annee) << endl;

     }


int main() {
    afficher(1990);
    afficher(2000);
    afficher(2010);
    afficher(2020);
    return EXIT_SUCCESS;
}
*/





