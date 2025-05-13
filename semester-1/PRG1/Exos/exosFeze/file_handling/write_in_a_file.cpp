#include <iostream>
#include <fstream>

int main() {
    std::ofstream file_out;

    file_out.open("feze.txt");

    if(!file_out) {
        std::cerr << "Erreur d'ouverture du ficher\n";
        return 1;
    }

    file_out << "This is the first line\n";
    file_out << "This is the second line\n";

    file_out.close();
}
