#include <iostream>
#include <string>

void positionToIndex(const std::string& position, int& col, int& row) {
    // La colonne est la première lettre (par exemple 'e' -> 4)
    col = position[0] - 'a';  // 'a' devient 0, 'b' devient 1, ..., 'h' devient 7

    // La ligne est le deuxième caractère, et on la convertit pour correspondre à l'indice (1 -> 7, 2 -> 6, ..., 8 -> 0)
    row = 8 - (position[1] - '0');  // Convertir le chiffre en indice inverse
}

int main() {
    std::string position1 = "e2";
    std::string position2 = "e4";

    int col1, row1, col2, row2;

    // Convertir les positions en indices de matrice
    positionToIndex(position1, col1, row1);
    positionToIndex(position2, col2, row2);

    // Afficher les résultats
    std::cout << "Position " << position1 << " -> Indice de matrice: (" << col1 << ", " << row1 << ")" << std::endl;
    std::cout << "Position " << position2 << " -> Indice de matrice: (" << col2 << ", " << row2 << ")" << std::endl;

    return 0;
}
