#include <iostream>
using namespace std;
template <typename T, typename U> T f(T x, U y, T z) {
    return x + y + z;
}

void f(double)          { cout << "fonction no 1"; };
void f(float&)          { cout << "fonction no 2"; };
void f(int&)            { cout << "fonction no 3"; };
void f(const int&)      { cout << "fonction no 4"; };
void f(unsigned short)  { cout << "fonction no 5"; };
void f(char)            { cout << "fonction no 6"; };


int main() {

    int i;
    f(i);
    return 0;
}