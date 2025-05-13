#include <iostream>
using namespace std;
template <typename T, typename U> T f(T x, U y, T z) {
    return x + y + z;
}

template <typename T, typename U> int f(T, U)   { return 1; }
template <typename T> int f(T, T)               { return 2; }
template <typename T> int f(T, short)           { return 3; }
template <typename T> int f(T, double)          { return 4; }
int f(int, double)                              { return 5; }



int main() {


    f(int(), double());
}