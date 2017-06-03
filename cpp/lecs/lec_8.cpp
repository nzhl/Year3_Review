#include <cstdio>
#include <cstdlib>

class ok{
public:
    const ok *f1() const {
        printf("f1\n");
        return this;
    }

    const ok *f2() const {
        printf("f2\n");
        return this;
    }

    const ok *f3() const {
        printf("f3\n");
        return this;
    }

    ok(){
        printf("OKKKKKk\n");
    }
};

void lec_8(){
    int i = 0;
    int &j = i;
    j = 5;
    printf("%d %d\n", i, j);

#if 0
    ok o;

    o.f1()->f2()->f3();
#endif
    ok *ok_array = new ok[5];
    delete[] ok_array;

    // just like malloc, the value is undefined.
    int *int_array = new int[5];
    for(int i = 0; i < 5; ++i){
        printf("%d\n", int_array[i]);
    }

    int *int_array2 = (int *)malloc(sizeof(int) * 5);
    for(int i = 0; i < 5; ++i){
        printf("%d\n", int_array2[i]);
    }

}
