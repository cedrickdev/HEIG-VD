#include <iostream>

using namespace std;

void f(int a) {
    if (a > 0) {

        f(a / 3);
        cout << a << " ";
        f(a / 2);
    }
}

int main() {
   // f(6);
    for(int i = 0; i <= 5; ++i) {
        switch(i) {
            case 1 : cout << "A";
            case 2 : cout << "B"; break;
            case 3 : cout << "C"; continue;
            case 4 : cout << "D";
            default : cout << "E";
        }
        cout << "F" << endl;
    }
}