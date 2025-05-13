#include <iostream>
#include <vector>

using namespace std;



class MaClasse {
   int val;
public:
   MaClasse(int v){ val = v; }
   MaClasse() {val = 0;}
   void show(){ cout << val; }
};
  
int main() {
   MaClasse obj[2];
   obj[0].show();
   obj[1].show();
}
