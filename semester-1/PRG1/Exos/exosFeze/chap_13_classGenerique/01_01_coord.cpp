#include <iostream>
#include <cstdlib>
using namespace std;

template<typename T>
class Coord {
public:
 Coord() : Coord(T(), T()) {
 };

 Coord(T x, T y) : x(x), y(y) {
 }

 void setCoord(T x, T y);

 T getX() const { return x; }
 T getY() const { return y; }

 void deplacer(T dx, T dy);

 void afficher() const;

private:
 T x;
 T y;
};

template<typename T>
void Coord<T>::setCoord(T x, T y) {
 this->x = x;
 this->y = y;
}

template<typename T>
void Coord<T>::deplacer(T dx, T dy) {
 this->x = dx;
 this->y = dy;
}

template<typename T>
void Coord<T>::afficher() const {
 cout << "(" << this->x << "," << this->y << ")";
}



int main() {
 cout << "origine  : ";
 const Coord<int> origin;
 origin.afficher();
 cout << endl;

 cout << "p1       : ";
 Coord<int> p1;
 p1.setCoord(1, 2);
 p1.afficher();
 cout << endl;

 cout << "p2       : ";
 Coord<double> p2(3, 4);
 p2.afficher();
 cout << endl;

 cout << "p2->     : ";
 p2.deplacer(1, 1); // conversion int => double
 cout << "(" << p2.getX() << ", " << p2.getY() << ")";
 cout << endl;

 return EXIT_SUCCESS;
}
