#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream file_in;

     file_in.open("feze.txt");

    if(!file_in) {
        std::cerr << "Erreur d'ouverture du ficher\n";
        return 1;
    }

    while(file_in) {
        std::string lecture_string;
        std::getline(file_in, lecture_string);
        std::cout << lecture_string << '\n';
    }
    file_in.close();
}