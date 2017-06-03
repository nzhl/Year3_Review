#include <cstdio>

//static int y = 33;

void lec_4(){
    short as[] = {1,2,3,4};
    short *ps = as;
    printf("%d\n", *as);
    printf("%d\n", *ps);

    //++as; -> could not increment an array

    int *ips = (int *)ps;
    printf("%d\n", *(short*)++ips);
}
