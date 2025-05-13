#include <iostream>
#include <cstdlib>
#include <vector>
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


template<typename T>
class Point {
public:
    Point() : name(), coord() {};
    Point(const string& nom, const Coord<T>& coord) : name(nom), coord(coord) {};
    Point(const string& nom) : name(nom) {};
    Point(const string& nom, T x, T y) : name(nom), coord(x, y) {};

    void afficher() const;
    void deplacer(T dx, T dy);
    //Getter
    string getNom() const {return name;}
    Coord<T> getCoord() const {return coord;}

    //Setter
    void setNom(const string& nom);
    void setCoord(const Coord<T>& coord);

private:
    string name;
    Coord<T> coord;
};

 template<typename T>
 void Point<T>::deplacer(T dx, T dy) {
     this->coord.deplacer(dx, dy);

 }

template<typename T>
void Point<T>::afficher() const {
    cout << this->name;
     this->coord.afficher();
}

template<typename T>
void Point<T>::setNom(const string& nom) {
    this->name =  nom;
}
template<typename T>
void Point<T>::setCoord(const Coord<T>& coord) {
     this->coord = coord;
}


int main() {
    const Point<int> origin;

     vector<Point<int>> dessin {{"p1",  1,  2},
                             {"p2",  4,  2},
                             {"p3",  9,  8},
                             {"p4", -1,  5},
                             {"p5",  3, -1},
                             {"p6",  7,  0}};



    return EXIT_SUCCESS;
}
