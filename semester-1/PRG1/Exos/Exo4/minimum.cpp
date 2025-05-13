
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int minimum(int a, int b) {
    return a < b ? a : b;
}

int main() {

    int a = 10;
    int b = 20;

    cout << " Le min c'est : " << minimum(a, b) << endl;

    return EXIT_SUCCESS;
}