#include <iostream>
#include <cstdlib>

#include "personne.h"
#include "date.h"

using namespace std;



int main() {
    Date uneDate = {30, 10, 2023};
    Persons person[MAX_SIZE];

    cout << "une date   : ";
    afficher_date(uneDate);
    cout << endl << endl;

    Personne anna = {"Anna", "Yverdon", uneDate};
    afficher_personne(anna);

    cout << endl;

    cout << "annee bessextile ? : " << boolalpha<< est_bessxtile(static_cast<Date>(2020))<< endl;




    uneDate.annee = 2021;
    cout << "Nouvelle date : " << uneDate.annee << endl;

    modif_date(&uneDate);

    cout << "Mon Annee : " << madate << endl;
    cout << "Mon Age : " << monage << endl;
    cout << "Mon Sex : " <<sex  << endl;

    cout <<endl << endl;
    person[0] = {"cedric", 23};
    person[1] = {"Chloe", 18};
    person[2] = {"Gilles", 35};

    for (int i=0; i<MAX_SIZE; ++i) {
        cout<<"Name : "<< person[i].Pname <<" Age : "<< person[i].age<<endl;
    }


    return EXIT_SUCCESS;
}
