#include <iostream>

using namespace std;

 int fibo(int n) {

     if( n < 2 )
         return n;

     return fibo(n - 1) + fibo(n - 2);
 }

 int main() {
     cout << "entrez un chiffre  :";
     int x;
     cin >> x;
     cout << "En applicant la formule de fibobacci on obtiens : " << fibo(x) << endl;
 }