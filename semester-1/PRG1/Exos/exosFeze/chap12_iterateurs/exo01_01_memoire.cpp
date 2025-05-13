/*
@brief: Une fonction générique display(...) qui reçoit deux itérateurs first et last et
liste toutes les valeurs contenues ainsi que leur emplacement mémoire.
 */
#include<iostream>
#include <string>
#include <vector>
#include <array>
#include <list>

using namespace std;

template<typename It>
 void display(It first, It last) {
    for (It i = first; i != last; ++i) {
        cout << *i << " "<< &i << endl;
    }
};


int main() {
    array  a  {1, 2, 3};
    vector v  {1.1, 2.2, 3.3};
    string s  ("HEIG-VD"s);
    list   l  {"chien"s, "chat"s, "souris"s};

    cout << "array"   << endl;    display(a.cbegin(), a.cend());
    cout << "vector"  << endl;    display(v.cbegin(), v.cend());
    cout << "string"  << endl;    display(s.cbegin(), s.cend());
    cout << "list"    << endl;    display(l.cbegin(), l.cend());
}