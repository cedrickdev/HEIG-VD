#include <iostream>


using namespace std;

pair<int, int> divmod(int numerateur, int denominateur) {
    return {numerateur / denominateur, numerateur % denominateur};
}

int main() {

     int n = 10;
     int d = 3;

    auto qr = divmod(n, d);

    cout << "division : " << qr.first << endl;
    cout << "reste : " << qr.second << endl;
    return EXIT_SUCCESS;
}
