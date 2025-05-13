#include <iostream>
#include <cstdlib>
#include <cstdint>
#include <cassert>
#include "date.h"
#include <array>

using namespace std;

int main() {
 /*
 array<char, 4> T1={'1','2','3','1'};


 for (int i = 0 ; i < sizeof(T1); ++i) {
  cout << "post " << i  << " = "<< T1[i] << endl;
 }

 T1[2] = 'A' ;
 for (int i = 0 ; i < sizeof(T1); ++i) {
  cout << "answer " << i  << " = "<< T1[i] << endl;
 }
 T1.at(3)= 'F' ;
 for (int i = 0 ; i < sizeof(T1); ++i) {
  cout << "answer " << i  << " = "<< T1[i] << endl;
 }
*/


 constexpr Date date = {25,01,1999};

 afficher_date(date);
 //modif_date(date);

}
