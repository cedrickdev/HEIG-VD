#include <iostream>
#include <cstdlib>
#include <cmath>


using namespace std;

    template<typename T>

    void afficherDetailsType() {
        std::cout << "Taille : " << sizeof(T)
                  << " byte" << (sizeof(T) < 2 ? "" : "s")
                  << " = " << (std::numeric_limits<T>::digits + std::numeric_limits<T>::is_signed)
                  << " bits\nPlage de valeurs : "
                  << +std::numeric_limits<T>::lowest()
                  << " -> " << +std::numeric_limits<T>::max()
                  << "\nCe type est "
                  << (std::numeric_limits<T>::is_signed ? "" : "non-")
                  << "signe" << std::endl;
    }

    int main() {

        afficherDetailsType<float>();
        return 0;
    }

