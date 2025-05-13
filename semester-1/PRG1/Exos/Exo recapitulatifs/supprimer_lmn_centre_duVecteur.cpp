#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Fonction pour convertir un vecteur en string
string to_string(const vector<int>& v) {
    string res = "{";
    for (size_t i = 0; i < v.size(); i++) {
        res += to_string(v[i]);
        if (i < v.size() - 1) res += ", ";
    }
    res += "}";
    return res;
}

// Fonction pour supprimer l'élément ou les éléments centraux
void supprimer_centre(vector<int>& v) {
    int n = v.size();
    if (n == 0) return; // Rien à supprimer si le vecteur est vide

    if (n % 2 == 1) {
        // Impair : supprimer l'élément unique au centre
        v.erase(v.begin() + n / 2);
    } else {
        // Pair : supprimer les deux éléments centraux
        v.erase(v.begin() + n / 2 - 1);
        v.erase(v.begin() + n / 2 - 1); // Deuxième suppression après mise à jour de l'index
    }
}

int main() {
    // Test avec plusieurs cas de vecteurs
    for (vector<int> v : {
        vector<int>{},   // Vecteur vide
        {1},             // Un seul élément
        {1, 2},          // Deux éléments
        {1, 2, 3},       // Trois éléments
        {1, 2, 3, 4},    // Quatre éléments
        {1, 2, 3, 4, 5}, // Cinq éléments
        {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 7}, // 0 éléments
        {1, 2, 3, 4, 5, 6} // Six éléments
    }) {
        cout << to_string(v) << " -> ";  supprimer_centre(v);
        cout << to_string(v) << endl;
    }

    return 0;
}
