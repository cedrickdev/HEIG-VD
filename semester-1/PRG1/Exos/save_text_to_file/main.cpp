#include <iostream>
#include <fstream>
#include <cstdlib>

int main() {
    std::string nom_fichier;

    // Demandez à l'utilisateur le nom du fichier où enregistrer le texte
    std::cout << "Entrez le nom du fichier ou enregistrer le texte : ";
    std::getline(std::cin, nom_fichier);

    // Ouvrez le fichier en mode écriture
    std::ofstream fichier_sortie(nom_fichier, std::ios::app);

    // Vérifiez si l'ouverture du fichier a réussi
    if (!fichier_sortie) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier. \n";
        return EXIT_FAILURE;
    }

    std::string texte;
    const std::string terminer = "#exit#";

    // Demandez à l'utilisateur de saisir du texte
    std::cout << "Entrez le texte à enregistrer dans le fichier (Ctrl+D ou #exit# pour terminer la saisie) :\n";
    while (std::getline(std::cin, texte)) {
        if (texte == terminer) break;
        // Écrivez le texte dans le fichier
        fichier_sortie << texte << std::endl;
    }

    // Fermez le fichier
    fichier_sortie.close();

    std::cout << "Le texte a été enregistré avec succès dans le fichier." << std::endl;

    return EXIT_SUCCESS;
}
