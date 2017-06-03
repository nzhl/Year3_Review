#if 0
#include <cstdio>

static int *static_test(){
    static int x = 1;
    ++x;
    return &x;
}

static int *local_test(){
    int y = 1;
    ++y;
    return &y;
}

static void fxxk(){
    int x = 5;
}


void lec_5(){
    int *p_x = static_test();
    printf("%d\n", *p_x);

    static_test();
    printf("%d\n", *p_x);


    /*
     * return the address of a local variable
        int *p_y = local_test();
        fxxk();
        printf("%d\n", *p_y);
    */

    int outer = 5;
    {
        int outer = 6;
        printf("%d\n", outer);
    }
    printf("%d\n", outer);

}

#endif
