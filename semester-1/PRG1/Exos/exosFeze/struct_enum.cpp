#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {

    struct Coord {
        int x, y, z;
    };

    struct Cercle {
        int   rayon;
        Coord centre;
    };

    const Coord origine = {0, 0, 0};
    Cercle cercle = {1, {2, 3, 4}};

    cout << cercle.rayon << endl;
    cercle.centre = origine ;

    Cercle* ptr = &cercle;



    // on deréférence le pointeur pour afficher le contenu du membre coord du circle
    cout << "valeur du pointeur : " << ptr->centre.x << endl;
    cout << "valeur du pointeur : " << (*ptr).centre.x;

    Coord coord1 = cercle.centre;




    return 0;
}

