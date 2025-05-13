#include <string>
#include <iostream>
#include <span>
#include <vector>

using namespace std;

void afficher(span<const int> v){
   for (int e: v) cout << e << ' '; cout << endl;
}

void echanger(int& a, int& b){
   int t = a;
   a = b;
   b = t;
}

 // trie a bulle
/*void tri_a_bulle(span<int> v) {
    size_t end = v.size();
    for (size_t j = 1; j < v.size(); ++j) {
        for (size_t i = 1; i < v.size(); ++i) {
            if (v[i] < v[i-1]) {
                echanger(v[i-1], v[i]);
            }
            --end;
        }
    }
}*/

 // tri par selection
  void tri_par_selection(span<int> v) {
    for (size_t i=0; i < v.size()-1; ++i) {
        size_t imin = i;
        for (size_t j = i + 1; j < v.size(); ++j) {
            if (v[j] < v[imin]) {
                imin = j;
            }
        }
        echanger(v[i], v[imin]);
    }
}

 // indice minimum
   /*size_t indice_minimum(span<const int> v) {
    size_t imin = 0;
    for (size_t i = 1; i < v.size(); ++i) {
        if (v[i] < v[imin])
            imin = i;

    }
    return imin;
}*/

int main() {
 vector<int> a{3,1,5,6,2,4};
  tri_par_selection(a);
     afficher(a);



}