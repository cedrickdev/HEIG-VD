#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

   string milieu( const string& str) {
      if (str.size() < 2)
         return str;
      else
         return str.substr((str.size() - 1) / 2 , 2 - str.size() % 2);;
   };
int main() {

}