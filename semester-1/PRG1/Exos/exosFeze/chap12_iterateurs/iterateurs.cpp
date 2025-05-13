#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <span>

using namespace std;

template<typename iterateur>
void d(iterateur first, iterateur last) {
    cout << "[";
    for (iterateur t = first; t != last; ++t) {
        if (t != first) cout << ", ";
        cout << *t;
    }
    cout << "]";
}
  bool est_pair(int e) {
    return e % 2 == 0;
};



int main() {

    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    cout << "Parcourt total:  ";   d(v.begin() + 1, v.end() - 2);
    cout << endl;

    vector<int> v1{1,2,3,4,5,6,7,8,9};
    cout << "Parcourt partiel: "; d(v1.begin()+ 5, v1.end());
    cout << endl;

    vector<int> v2{1,2,3,4,5,6,7,8,9,10};
    cout << "Parcourt avec predicat: ";
    cout << count_if(v2.begin(), v2.end(), est_pair);
    cout << endl;

    vector<int> v3{4};
    cout << "insert: ";
    v3.insert(v3.begin(), v.begin(), v.begin() + 2);
    cout << endl;

        vector<int> v4{8, 10, 5, 9, 7, 4, 11, 2, 1};
        auto min_index = min_element(v4.begin(), v4.end()) - v4.begin();
        cout << "Minimum: " << min_index << endl;
        return 0;





  

    return EXIT_SUCCESS;
}




