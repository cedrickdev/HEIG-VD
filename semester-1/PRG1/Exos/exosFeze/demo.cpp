#include <algorithm>
#include <iostream>
#include <array>
#include <sstream>
#include <cmath>
#include <numeric>
#include <vector>
#include <cstdlib>

using namespace std;

int main () {
    vector<int> v1 {1,2,3,4,5};
    vector<vector<int>> v2 (3, vector<int>(3, 5));

// boucle avec le .size()
    cout << "v1 : ";
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << " ";
    };
    cout << endl;

    // boucle avec les iterateurs
    cout << "v2 : ";
    for (auto j = v1.begin(); j != v1.end(); ++j ) {
        cout << *j << " ";
    }
    cout << endl;


   for (auto i : v2) {
       for (auto j : i) {
           cout << j << " " ;
       }
       cout<< " " ;
   }

    return EXIT_SUCCESS;
}

