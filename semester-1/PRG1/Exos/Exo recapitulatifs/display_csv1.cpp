#include "display_csv1.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

 using namespace std;
void display_csv(string_view filename, char separator, int colonne){
  ifstream File(filename);
    if (!File)
        throw Exception{};

        string line;
        while (getline(cin, line)) {
            stringstream s(line);
            string element;
            while (getline(s,element,separator))
                cout << setw(colonne) << element;
            cout << endl;
        }
}


