#include <iostream>

using namespace std;


template <typename T, typename U> T f(T x, U y, T z) {
  return x + y + z;
}


int main() {
  int      i = 1,   j = 2,  k = 3;
  double   x = 4.5, y = 5.5;

  f(i, x, j);
}