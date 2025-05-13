#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef double mat3x3[3][3];
typedef double vec3[3];

 void mat_vec_mult(const mat3x3 m, vec3 v, vec3 w){
     for (int i=0; i<3; i++) {
             w[i] = 0;
             for (int j=0; j<3; j++) {
                w[i] = m[i][j] * v[j];
             }
     }


int main() {

        mat3x3 m = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };

        vec3 v = { 1, 2, 3 };
        vec3 w = {};

        mat_vec_mult(m, v, w);
        print_mat("%m * %v = %v\n", m, v, w);
    }
    return 0;
}
