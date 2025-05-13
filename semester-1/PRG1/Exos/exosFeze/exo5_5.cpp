/*
Écrire un programme en C++ qui permet à l'utilisateur de saisir les données d'un.e étudiant.e, de calculer sa moyenne, et d'afficher un résumé de l'étudiant.e avec un formatage propre.

Le programme doit :

Demander à l'utilisateur de saisir
le nom,
l'âge,
la note en mathématiques (sur 6), et
la note en PRG1 (sur 6) de l'étudiant.e.
Calculer la moyenne de l'étudiant.e.
Déterminer si l'étudiant.e est admis.e (si la moyenne est supérieure ou égale à 3.8).
Afficher un tableau avec le nom, l'âge, les notes, la moyenne, et le statut d'admission de l'étudiant.e.
Un exemple de l'exécution du programme :

Entrez le nom de l'étudiant.e : Fouad Hanna
Entrez l'âge de l'étudiant.e : 19
Entrez la note en mathématiques (max. 6): 5.2
Entrez la note en PRG1 (max. 6): 5.3
Nom               Age  Note Math     Note PRG1    Admis
-------------------------------------------------------
Fouad Hanna        19        5.2           5.3     Oui
-------------------------------------------------------
Moyenne : 5.25
Résultat : Admis

 */
#include <iostream>
#include <string>
#include <iomanip>

using namespace std ;

double moyenne (double a, double b) {
    return (a + b) / 2;
}

string admis(double a) {
    return a >= 4 ? "oui" : "non";
}

string admis2(double a) {
    return a >= 4 ? "Admis" : "Pas admis";
}
int main() {

    string nom;
    int age;
    double note_maths;
    double note_prg1;

    cout << "Entrez le nom de l'étudiant(e) : ";
    getline(cin, nom);

    cout << "Entrez l'age de l'étudiant(e) : ";
    cin >> age;

    cout << "Entrez la note en mathématiques  (max. 6): ";
    cin >> note_maths;

    cout << "Entrez la note en PRG1 (max. 6) : ";
    cin >> note_prg1;




    cout << "Nom" << setw(20) << "Age" << setw(15) << "Note Math" << setw(15)<< "Note PRG1" << setw(15)<< "Admis" << endl;
    cout << "---------------------------------------------------------------------"<< endl;
    cout << nom << setw(10) << age << setw(15) << note_maths << setw(15) << note_prg1 << setw(15) << admis(moyenne(note_maths,note_prg1)) << endl;
    cout << "---------------------------------------------------------------------" << endl;

    cout << "Moyenne  : " << moyenne(note_maths, note_prg1) << endl;
    cout << "Resultat : " << admis2(moyenne(note_maths, note_prg1)) << endl;

    return EXIT_SUCCESS;
}
