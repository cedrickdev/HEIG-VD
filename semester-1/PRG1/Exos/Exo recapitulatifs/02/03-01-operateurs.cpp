#include <iostream>

using namespace std;

int main() {
    int i, j, k;

    i = 0; k = i++;
    cout << "A : i = " << i << " k = " << k << endl;

    i = 1; k = ++i;
    cout << "B : i = " << i << " k = " << k << endl;

    i = 2; j = 3;
    k = i++ * ++j;
    cout << "C : i = " << i << " j = " << j << " k = " << k << endl;

    i = 3; j = 4;
    k = i *= --j;
    cout << "D : i = " << i << " j = " << j << " k = " << k << endl;

    return EXIT_SUCCESS;
}