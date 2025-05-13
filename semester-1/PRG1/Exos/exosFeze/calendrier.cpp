#include <iostream>
#include <iomanip>

using namespace std;

bool estBissextile(int annee) {
    return (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0));
}

int premierJour(int mois, int annee) {
    // Algorithme de Zeller pour trouver le jour de la semaine
    if (mois < 3) {
        mois += 12; // Janvier et Février comme mois 13 et 14 de l'année précédente
        annee--;
    }
    int q = 1; // Premier jour du mois
    int k = annee % 100; // Année du siècle
    int j = annee / 100; // Siècle

    // Formule de Zeller
    return (q + (13 * (mois + 1)) / 5 + k + (k / 4) + (j / 4) - (2 * j)) % 7;
}

int joursDansMois(int mois, int annee) {
    if (mois == 2) {
        return estBissextile(annee) ? 29 : 28; // Février
    }
    if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        return 30; // Avril, Juin, Septembre, Novembre
    }
    return 31; // Tous les autres mois
}

void afficherCalendrier(int annee) {
    for (int mois = 1; mois <= 12; ++mois) {
        std::cout << "Mois " << mois << " :\n";
        std::cout << "L  M  M  J  V  S  D" << std::endl;

        // Calcul du premier jour du mois
        int premier = premierJour(mois, annee);

        // Afficher les espaces vides avant le premier jour
        for (int i = 0; i < premier; ++i) {
            std::cout << "   "; // Trois espaces pour chaque jour
        }

        // Nombre de jours dans le mois
        int jours = joursDansMois(mois, annee);

        // Afficher les jours du mois
        for (int jour = 1; jour <= jours; ++jour) {
            std::cout << std::setw(2) << jour << " "; // Affiche le jour avec un espacement
            if ((jour + premier) % 7 == 0) { // Nouvelle ligne après chaque semaine
                std::cout << std::endl;
            }
        }
        std::cout << std::endl; // Pour une séparation claire
    }
}

int main() {
    int annee;
    int nbErreurs = 0;

    std::cout << "Entrez l'année (par exemple 2023) : ";
    std::cin >> annee;

    while( annee <= 2023){
        nbErreurs++;
      cerr << "Annee invalide " << endl;
        std::cin >> annee;
    }

    // Afficher le calendrier de l'année saisie
    afficherCalendrier(annee);

    clog << "Nombre d'essaies = " << nbErreurs << " fois " << endl;
    return 0;
}
