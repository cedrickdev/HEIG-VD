/*
Redirection de cin, copier un fichier dans un autre
Modifier le programme en C++ de l'exercice 01-02 pour ajouter les fonctionnalités suivantes :

Demander à l'utilisateur de saisir le nom d'un fichier source.
Au lieu de saisir le texte, utiliser cin pour lire depuis le fichier source et ajouter (append) le texte dans le fichier de sortie. Si le fichier de sortie existe déjà, il ne doit pas être écrasé.
Ps. Le code utilisé pour l'écriture ne doit pas changer, comparé à l'exercice 01-02.
 */
#include <iostream>
#include <string>
#include <fstream>

using namespace std ;

bool lire_fichier(const string &nomFichier) {

    ifstream fichier_sortie(nomFichier);

    if (!fichier_sortie) {
        cerr << " Erreur d´ouverture du fichier\n";
        return false;
    }
    const string terminer = "#exit#";

    while (fichier_sortie) {
        string texte;
        getline(fichier_sortie, texte);
        cout << texte << "\n";
    }

    fichier_sortie.close();
    return true;
}

bool ecrire_fichier(const string &nomFichier) {

    ofstream fichier_entree;

    fichier_entree.open(nomFichier, ios::app);

    if (!fichier_entree) {
        cerr << " Erreur d´ouverture du fichier\n";
        return false;
    }

    string texte;
    const string terminer = "#exit#";

    cout << "Saisir du texte :\n";
    while (getline(cin, texte)) {
        if (texte == terminer) break;
        fichier_entree << texte;
    }

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

    std::string nom_fichier_src;
    // Demander à l'utilisateur le nom du fichier source
    std::cout << "Entrez le nom du fichier source : ";
    std::getline(std::cin, nom_fichier_src);

    std::ifstream fichier_entree(nom_fichier_src);

    // Vérifier si l'ouverture du fichier a réussi
    if (!fichier_entree) {
        std::cerr << "Erreur : Impossible d'ouvrir le fichier. \n";
        return EXIT_FAILURE;
    }

    auto cin_buf = cin.rdbuf();
    cin.rdbuf(fichier_entree.rdbuf());

    ecrire_fichier(nomFichier);

    cin.rdbuf(cin_buf);
    fichier_entree.close();
    return EXIT_SUCCESS;
}
