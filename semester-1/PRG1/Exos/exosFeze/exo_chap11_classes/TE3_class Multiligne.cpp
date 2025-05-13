#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

 class Multiligne {

 public:
     Point get_nr_of_segments() const { return point;}

 private:
     Point point;
 };

void show(const Multiligne& multiligne) {
   cout << "Nbre de segments :"
        << multiligne.get_nr_of_segments()
        << " /  Longeur : "
        << multiligne.get_length()
        << endl;
}

int main() {
    Point p1{2, 3};
    const Point p2{5, 3};
    Point p3{5, 7};

     Multiligne multiligne;
     show(multiligne);
    multiligne.add_point(p1);
    show(multiligne);
    multiligne.add_point(p2);
    show(multiligne);
    multiligne.add_point(p3);
    show(multiligne);

};