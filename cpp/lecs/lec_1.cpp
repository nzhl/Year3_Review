#include <cstdio>


static void loop(){
    int ch = 0;
    printf("Press <C-d> to exit\n");

    while(ch != EOF){
        /*
         * It will flush the input buffer only if newline is input.
         *
         */
        putchar(ch = getchar());
    }
}

static void rec(){
    int ch = 0;
    putchar(ch = getchar());
    if(ch == EOF){
        return;
    }
    else{
        rec();
    }
}


void lec_1(){
    if(1){
        loop();
    }
    else{
        rec();
    }
}

