#include <iostream>
#include <cstdlib>

struct fuck{
    int x;
    int y;
    int z;
};

typedef struct {
    int x, y, z;
}fuck_in_short;

struct fk{
    int x;
    short y;
};

struct kk{
    long x;
    short y;
};


union what{
    int x;
    long y;
};

struct tiny{
    // 3 bit
    char x: 3;
    char y: 3;
};

#pragma pack(1)
struct kkk{
    long x;
    short y;
};

static void copy_fuck(fuck_in_short fis){
    printf("%d %d %d\n", fis.x, fis.y, fis.z);
}

void lec_6(){
    fuck_in_short fis = {1,2,3};
    printf("%d %d %d\n", fis.x, fis.y, fis.z);

    copy_fuck(fis);

    fuck_in_short fis_array[5];
    for(int i= 0; i < 5; ++i){
        printf("%d %d %d\n", fis_array[i].x, fis_array[i].y, fis_array[i].z);
    }

    // will init all the value into 0
    fuck *ptr_fuck_in_short = (fuck *)calloc(1, sizeof(fuck));
    printf("%d %d %d\n", ptr_fuck_in_short->x, ptr_fuck_in_short->y, ptr_fuck_in_short->z);
    // value undefined
    fuck *ptr_fuck = (fuck *)malloc(sizeof(fuck));
    printf("%d %d %d\n", ptr_fuck->x, ptr_fuck->y, ptr_fuck->z);

    printf("%lu\n", sizeof(fk));
    printf("%lu\n", sizeof(kk));
    printf("%lu\n", sizeof(kkk));

    printf("%lu\n", sizeof(what));
    printf("%lu\n", sizeof(tiny));
}
