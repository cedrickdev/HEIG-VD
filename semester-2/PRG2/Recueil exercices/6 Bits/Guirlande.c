#include <stdio.h>
#include <unistd.h>

#define CLIGNOTEMENTS 50

 int main() {

     const char eteint = '-';
     const char allume = "*";
     unsigned delay = 100;

      for(int i = 1; i < CLIGNOTEMENTS; i++) {

          usleep(delay * 1000);
      }




     return 0;
 }