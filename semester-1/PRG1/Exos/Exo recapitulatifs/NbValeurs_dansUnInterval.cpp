#include <iostream>
#include <span>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
ostream& operator<< (ostream& os, span<T> v) {
    os << "[";
     for (size_t i = 0 ; i < v.size(); ++i) {
         if (i) os << ", ";
         os << v[i];
     }
    os << "]";
    return os;
}

template<typename T>
struct entre {
  const  T& min;
  const T& max;

    bool operator()(const T& e) {return e >= min and e <= max;}
};

int main() {
    vector<int> a{1,2,3,4,5,6,7,8,9,10};
    cout << span(a) << endl;
    cout << count_if(a.begin(), a.end(), entre<int>{3, 7});
    return EXIT_SUCCESS;
}
