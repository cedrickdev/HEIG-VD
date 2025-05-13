/*
Lecture et ajout de texte dans un fichier
Modifier le programme en C++ de l'exercice 01-01 pour faire ce qui suit :

Demander à l'utilisateur de saisir le nom du fichier de sortie.
Lire le contenu du fichier de sortie, s'il existe et l'afficher sur la console.
Demander à l'utilisateur de saisir du text et ajouter (append) le texte saisi dans le fichier de sortie. Si le fichier existe déjà, il ne doit pas être écrasé.
S'assurer que le programme gère les erreurs d'ouverture de fichier.
Pour terminer la saisie, l'utilisateur pourra taper #exit# dans une ligne séprée ou utiliser Ctrl+D.
Ps. Ctrl+D et Ctrl+Z simule le EOF pour les systèmes Unix et Windows, respectivement
 */
#include <iostream>
#include <string>
#include <fstream>

using namespace std ;

bool lire_fichier(const string &nomFichier) {
    // Ouvrir le fichier en mode écriture
    ifstream fichier_sortie(nomFichier);

    // Vérifiez si l'ouverture du fichier a réussi
    if (!fichier_sortie) {
        cerr << " Erreur d´ouverture du fichier\n";
        return false;
    }

    const string terminer = "#exit#";

    // Demander à l'utilisateur de saisir du texte
    while (fichier_sortie) {
        string texte;
        getline(fichier_sortie, texte);
        cout << texte << "\n";
    }

    // Fermer le fichier
    fichier_sortie.close();
    return true;
}

bool ecrire_fichier(const string &nomFichier) {
    // Ouvrir le fichier en mode écriture
    ofstream fichier_entree;

    fichier_entree.open(nomFichier, ios::app);

    // Vérifiez si l'ouverture du fichier a réussi
    if (!fichier_entree) {
        cerr << " Erreur d´ouverture du fichier\n";
        return false;
    }

    string texte;
    const string terminer = "#exit#";

    // Demander à l'utilisateur de saisir du texte
    cout << "Saisir du texte :\n";
    while (getline(cin, texte)) {
        if (texte == terminer) break;
        fichier_entree << texte;
    }

    // Fermer le fichier
    fichier_entree.close();
    std::cout << "Le texte a été enregistré avec succès dans le fichier." << std::endl;
    return true;
}

int main() {
    string nomFichier;

    // Demander à l'utilisateur le nom du fichier où enregistrer le texte
    cout << "Saisir le nom du fichier de sortie : ";
    getline(cin, nomFichier);

    lire_fichier(nomFichier);
    ecrire_fichier(nomFichier);

    return EXIT_SUCCESS;
}
