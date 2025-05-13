/*
Sauvegarde de texte dans un fichier
Écrire un programme en C++ qui fait ce qui suit :

Demander à l'utilisateur de saisir le nom du fichier de sortie.
Si le fichier existe déjà, il ne doit pas être écrasé.
Demander à l'utilisateur de saisir du texte et enregistrez le texte saisi dans le fichier de sortie. Répéter cette action tant que l'utilisateur n'a pas terminé.
Pour terminer la saisie, l'utilisateur pourra taper #exit# dans une ligne séprée ou utiliser Ctrl+D.
S'assurer que le programme gère les erreurs d'ouverture de fichier.
Ps : simlulation du EOF (End of File)

Ctrl+D et Ctrl+Z sur Unix et Windows, respectivement.
Cmd+D sur Mac
 */
#include <iostream>
#include <string>
#include <fstream>

using namespace std ;

int main() {
    string nomFichier;

    // Demander à l'utilisateur le nom du fichier où enregistrer le texte
    cout << "Saisir le nom du fichier de sortie : ";
    getline(cin, nomFichier);

    // Ouvrir le fichier en mode écriture
    ofstream fichier_sortie(nomFichier, ios::app);

    // Vérifiez si l'ouverture du fichier a réussi
    if (!fichier_sortie) {
        cerr << " Erreur d´ouverture du fichier\n";
        return EXIT_FAILURE;
    }

    string texte;
    const string terminer = "#exit#";

    // Demander à l'utilisateur de saisir du texte
    cout << "Saisir du texte : ";
    while (getline(cin, texte)) {
        if (texte == terminer) break;
        fichier_sortie << texte;
    }

    // Fermer le fichier
    fichier_sortie.close();
    std::cout << "Le texte a été enregistré avec succès dans le fichier." << std::endl;

    return EXIT_SUCCESS;
}
