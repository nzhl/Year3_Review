#include <typeinfo>
#include <cstdio>

class Base{
    friend Base operator+(const Base &lhs, const Base &rhs);

public:
#if 0
    Base operator+(const Base& rhs){
        printf("Class\n");
        return *this;
    }
#endif
};

Base operator+(const Base &lhs, const Base &rhs){
    printf("out of class\n");
    return Base(lhs);
}

class Sub : public Base{

    public:
    Sub &operator+(const Sub& rhs){
        printf("plus!\n");
        return *this;
    }

    operator int(){
        return 10;
    }
};

class Base1{
public:
    virtual void fuck(){
        printf("Base1 wtf!\n");
    }

    virtual ~Base1(){}
};

class Sub1 : public Base1{
public:
    virtual void fuck(){
        printf("Sub1 wtf!\n");
    }

};

void lec_15(){
    Base x, y;
    x = x + y;
#if 0
    // Error ! Base is not polymorphic.
    Sub s;
    Base *ptr_b = &s;
    Sub *ptr_s = dynamic_cast<Sub *>(ptr_b);
#endif
    Sub a;
    Sub b;
    // the following two are quite the same.
    a = a + b;
    a.operator+(b);

    printf("%d\n", (int)a);

    // Everything is OK.
    Sub1 s;
    Base1 *ptr_b = &s;
    ptr_b->fuck();
    Sub1 *ptr_s = dynamic_cast<Sub1 *>(ptr_b);
    ptr_s->fuck();

#if 1

    Base1 bb;
    Base1 *ptr_bb = &bb;
    ptr_bb->fuck();
    Sub1 *ptr_ss = dynamic_cast<Sub1 *>(ptr_bb);
    // ptr_s == NULL
    if(!ptr_ss){
        printf("ptr_ss == NULL\n");
    }

    try{
        Sub1 &ref_ss = dynamic_cast<Sub1 &>(bb);
        ref_ss.fuck();
    }
    catch(std::bad_cast b){
        printf("Bad Cast!\n");
    }
    catch(...){
        printf("Unknown!\n");
    }

#endif
}
