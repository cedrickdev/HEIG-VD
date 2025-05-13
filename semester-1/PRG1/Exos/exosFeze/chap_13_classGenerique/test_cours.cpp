#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

template <typename  T>
 struct Entre{
     const T& min;
     const T& max;
     bool operator() (const T& valeur) {return valeur >= min and valeur <= max; }
 };
int main() {
    const vector v1 {1,  2,  3,  4,  5,  6,  7,  8,  9,  10};

    int min = 2, max = 7;

    cout << count_if(v1.begin(), v1.end(), Entre<int> {min, max}) << endl;

    return EXIT_SUCCESS;
}
