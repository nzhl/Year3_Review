#include <cstdio>

class Fred{
    int x;
    int y;
    public:
    int get() const{
        return x + y;
    }

    // virtual function
    //virtual void kk() = 0;
};

class Fred1: virtual public Fred{
    public:
        void say(){
            printf("Fred1\n");
        }
};

class Fred2 : virtual public Fred{
    public:
        void say(){
            printf("Fred2\n");
        }
};

class Sam1: public Fred1, public Fred2{

};



void lec_20(){
    Sam1 sam;
    printf("%p\n", &sam);
    //sam.say(); -> ambiguous
    sam.Fred1::say();
    sam.Fred2::say();

    Fred2 *p = &sam;
    printf("%p\n", p);
    // since no virtual, so use static cast
    Sam1 *ps = static_cast<Sam1 *>(p);
    printf("%p\n", ps);
    ps->Fred1::say();
    ps->Fred2::say();

    // no virtual 16 : (int x = 4 + int y = 4) * 2 = 16
    // virtual 24 : (int x = 4 + int y = 4 + ptr 8 * 2 = 24
    // virtual : share the same base class.
    printf("%lu\n", sizeof(Sam1));
}
