#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> a = {1, 2, 3, 4, 5};

    // Efface le deuxième élément (indice 1)
   //a.erase(a.begin() + 1);

    // Initialiser le vecteur b avec les éléments restants de a
    vector<int> b;
    b.reserve(10);

    // Parcours le vecteur b
    for (int e : a) {
        cout << e << " ";
    }

    cout << endl;
    cout << b.capacity() << endl;
    cout << b.size() << endl;

    return 0;
}

