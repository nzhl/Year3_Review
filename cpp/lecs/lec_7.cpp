#include <iostream>

struct xx{
    void print(){
        printf("Hello!\n");
    }
};

class xxx{
public:
    xxx(){
        printf("wtf constructor ?\n");
    }

#if 0
    // ambiguous with above code.
    xxx(int x = 1): x(x)
    {
        printf(".....\n");
    }
#endif

    // default value either in declaration or definition, could not occur both.
    void wtf(int x = 10) const ;

    // implicitly inline
    int getX() const {
        return x;
    }
private:

    int x;
};

void xxx::wtf(int x) const {
    printf("wtf %d function!\n", x);
}

void lec_7(){
    printf("%lu\n", sizeof(xx));
    xx x;
    x.print();

    //xxx x1 = {3}; -> can not use a c-style initializer.
    //xxx x1(); -> function declaration
    xxx x1;

    // the same as y = 3;
    int y(3);
    printf("%d\n", y);

    printf("%d\n", x1.getX());

    x1.wtf();
}
