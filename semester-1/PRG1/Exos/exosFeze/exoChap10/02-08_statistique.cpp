/**
* @file 02-08_statistique.cpp.cpp
* @version 1.0.0
* @author TCHINDA FEZE Cedrick Vanel
* @date : 02.01.2025
* @brief :Ce programme permet de créer un vecteur contenant la somme des notes de chacun ou la moyenne de chacun.
*/
#include <iostream>
#include <cstdlib>
#include <span>
#include <array>
#include <vector>
#include <iomanip>
using namespace std;

template <typename T, size_t N>
void afficher(span<T, N> s) {
    cout << "[";
    for (size_t i=0; i<s.size(); ++i) {
        if (i) cout << ", ";
        cout << s[i];
    }
    cout << "]";
}

template <typename T, size_t N>
T somme(span<T, N> v) {
    auto result = T{};
    for (const T& t : v)
        result += t;
    return result;
}

template <typename T, size_t N>
T moyenne(span<T, N> v) {
    if (v.empty())
        return T{};
    return somme(v) / v.size();
}

template <typename T, typename Fct>
vector<T> vectStats(const vector<vector<T>>& v, Fct fct) {
    vector<T> stats;
    stats.reserve(v.size());
    for (auto& ligne : v)
        stats.push_back(fct(ligne));
    return stats;
}

using Data    = double;
using Ligne   = vector<Data>;
using Matrice = vector<Ligne>;

int main() {

    const Matrice notes {{4.0, 5.0, 6.0},  // Jean
                         {4.1, 5.1, 4.8},  // Marie
                         {3.5, 4.1     },  // Joshua
                         {4.5, 4.5, 4.6}}; // Ali

    cout << fixed << setprecision(1);

    cout << "somme   : ";
    vector sommes = vectStats(notes, somme<const Data, std::dynamic_extent>);
    afficher(span(sommes));
    cout << endl;

    cout << "moyenne : ";
    vector moyennes = vectStats(notes, moyenne<const Data, std::dynamic_extent>);
    afficher(span(moyennes));
    cout << endl;
}
