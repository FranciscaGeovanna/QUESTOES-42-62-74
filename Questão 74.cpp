#include <stdio.h>

int main(){
    int res;
    
    printf ("Programa para escrever a tabuada de 1 a 10\n");
    
    for (int t = 1; t <= 10; t++){
        for (int m = 1; m <= 10; m++){
            res = t * m;
            printf ("\n%2d X %2d = %3d", t, m, res);
        }
    }

    return 0;
}
