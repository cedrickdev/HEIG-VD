#include <stdlib.h>
#include <stdio.h>

#define WIDTH 7
#define HEIGHT 6

int main() {
  int array[WIDTH] [HEIGHT];




    for (int i=0; i<HEIGHT; ++i) {
        for (int j=0; j<WIDTH; ++j) {
            array[i][j] = (i+1) * (j+1);
            printf("%d",  array[i][j]);
        }
        printf("\n");
    }




    return 0;
}
