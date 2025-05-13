#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

class Voiture {
public:
    //Constructeur
    Voiture(unsigned capReservoir, double consoMoyenne);

    //Getter
    unsigned getCapReservoir()    const { return capReservoir; }
    double getConsoMoyenne()      const { return consoMoyenne; }
    double getNbreLitreActuel()   const { return nbreLitreActuel; }
    static double getPrixEssence()      { return prixEssence; }

    //Setter
    static void setPrixEssence(double prix);

    //Autres
    double effectuerTrajet(double nbKm) ;

private:
    static double prixEssence; // Le prix de l'essence
    unsigned capReservoir; // capacité du réservoir
    double consoMoyenne; // consommation moyenne
    double nbreLitreActuel; // nombre de litres actuellement dans le réservoir
};

double Voiture::prixEssence = 1.7;

Voiture::Voiture(unsigned capReservoir, double consoMoyenne) : capReservoir(capReservoir), consoMoyenne(consoMoyenne), nbreLitreActuel(nbreLitreActuel) {}

  void Voiture::setPrixEssence(double prix) {
       prixEssence = prix;
  }

 double Voiture::effectuerTrajet(double nbKm) {
     const double consommation = nbKm * consoMoyenne / 100;
    nbreLitreActuel -= consommation;
    while (nbreLitreActuel <= 0)
        nbreLitreActuel += capReservoir;
    return consommation * prixEssence;
 }

 void afficherPrixEssence(double prix) {
    cout << fixed << setprecision(2)
    << "prix de l'essence : " << prix << " Frs"
    << endl << endl << defaultfloat;
}

  void afficherVoiture(const  Voiture& v) {
    cout << "Capacite du reservoir [l]      : " << v.getCapReservoir() << endl
       << fixed << setprecision(1)
       << "Consommation moyenne [l/100km] : " << v.getConsoMoyenne() << endl
       << "Nb litres restants             : " << v.getNbreLitreActuel()
       << endl << endl << defaultfloat;
}

void afficherCoutTrajet(double montant) {
    cout << fixed << setprecision(2)
         << "Cout du trajet : " << montant << " Frs"
         << endl << endl << defaultfloat;
}

int main() {
    afficherPrixEssence(Voiture::getPrixEssence());
    Voiture::setPrixEssence(1.95);
    afficherPrixEssence(Voiture::getPrixEssence());

    Voiture v(52, 6.7);

    afficherVoiture(v);
    afficherCoutTrajet(v.effectuerTrajet(1000));
    afficherVoiture(v);
    afficherCoutTrajet(v.effectuerTrajet(200));
    afficherVoiture(v);


    return EXIT_SUCCESS;
}


