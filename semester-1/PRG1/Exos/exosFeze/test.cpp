#include <iostream>

using namespace std;

int f(int a, int b, char c) {

 a -= 3;
    ++b;
    c--;
    return a * b;
}

int main() {
   int i = 7, j = 16;
     char c = 'B';
    cout << f(i,j,c) << ' ';
    cout << i << ' ' << j << ' ' << c << ' ';
}