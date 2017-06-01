#include <cstdio>

int x = 999;

void lec_0(){
   /*
    * extern int x = 200;
    * error: 'extern' variable cannot have an initializer
    */
    extern int x;
    printf("%d\n", x);
}

