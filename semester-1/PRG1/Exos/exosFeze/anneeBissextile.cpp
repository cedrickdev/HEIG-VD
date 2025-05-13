#include <chrono>
#include <iostream>

using namespace std;

bool estBissextile(int annee){
    return (annee % 400 == 0) or (annee % 4 == 0 and annee & 100 != 0 );
}

void afficher(int annee) {
    cout << boolalpha << estBissextile(annee) << endl;
}

 int main() {
    cout << " Entrez une annee pour savoir si elle est bissextile ou non";
    int year;
    cin >> year;

     bool anneeBissextile = estBissextile(year);

   // afficher(year);

    if (anneeBissextile) {
    cout << year << " est une annee bissextile";
    } else {
        cout << year <<  " n'est pas une annee bissextile";
    };


    return EXIT_SUCCESS;
 }

