#include <iostream>

using namespace std;

 int facto(int n) {

     // cas trivial
     if (n <= 1)
         return 1;
     // appel récursif
     return n * facto(n - 1);
 }

 int main() {
     cout << "entrez un nombre pour calculcer son factoriel  :";
     int x ;
     cin >> x;
     cout << "le factoriel de " << x << " est : " << facto(x) << endl;
 }