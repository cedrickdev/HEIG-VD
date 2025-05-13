#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

 string fileName;
    std::cout << "Entrez le nom du fichier ";
    std::getline(std::cin, fileName);

    ofstream outputFile(fileName, std::ios::app);

    if (!outputFile) {
        cout << "Erreur";
        return EXIT_FAILURE;
    };

    string texte;
    cout << "Entrer un texte" << endl;
    while (getline(cin, texte)) {
        if (texte == "exit") break;
        outputFile << texte << endl;
    }

    outputFile.close();

    return EXIT_SUCCESS;
}
