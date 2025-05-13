#include <iostream>

using namespace std;

template <typename T>
 T somme(T a, T b) {
 return a + b;
}


int main() {

 double c = 3.2;
 cout << somme(2, 3) << endl;
 cout << somme("HEIG"s, "-VD"s);// sommes des strings
}