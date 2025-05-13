#include <iostream>
#include <fstream>

 int main() {
     std::ofstream file_out;

     file_out.open("feze.txt", std::ios::app);

      if(!file_out){
         std::cerr << "Erreur d'ouverture du fichier\n";
          return 1;
     }

     file_out << "this is an edited text\n";

     file_out.close();
 }