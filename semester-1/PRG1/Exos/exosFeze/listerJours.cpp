#include <iostream>

using namespace std;

 int main() {


     enum class Jour {LUNDI=1, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE};

     const Jour PREMIER = Jour::LUNDI;

     cout <<"[";

      switch (PREMIER) {
         case Jour::LUNDI    : cout << "Lundi  ";
         case Jour::MARDI    : cout << "Mardi  ";
         case Jour::MERCREDI : cout << "Mercredi  ";
         case Jour::JEUDI    : cout << "Jeudi  ";
         case Jour::VENDREDI : cout << "Vendredi  ";
         case Jour::SAMEDI   : cout << "Samedi  ";
         case Jour::DIMANCHE : cout << "Dimanche ";
      }
     cout <<"]";



     return EXIT_SUCCESS;
 }
