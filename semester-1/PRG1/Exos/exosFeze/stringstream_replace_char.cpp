#include <iostream>
#include <string>
#include <sstream>

using namespace std;


    int main() {
        string email = "cedrick.feze@example.com";
        stringstream modifiedEmail;

        for (char c : email) {
            if (c == '@') {
                modifiedEmail << "(at)";
            } else {
                modifiedEmail << c;
            }
        }

        std::cout << "Adresse e-mail modifiee : " << modifiedEmail.str() << std::endl;

        return EXIT_SUCCESS;
    }


