#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

  string vraiFaux(bool a) {
    return a ? "vrai" : "faux";
  }

int main() {

    char b;

      cout << "Entrez un charactere : ";
      cin >> b;
      cout << "Code ASCII de " << "'" << b << "'" << ":"  <<  int(b) << endl;
      cout << "'" << b << "'" << " est une lettre de l'alphabet :" << vraiFaux(isalpha(b)) << endl;
      cout << "'" << b << "'" << " est une lettre miniscule :" << vraiFaux(islower(b)) << endl;
      cout << "'" << b << "'" << " est un chiffre  :" << vraiFaux(isdigit(b)) << endl;
      cout << "'" << b << "'" << " est une ponctuation  :" << vraiFaux(ispunct(b)) << endl;

    return EXIT_SUCCESS;

}

