#include <cstdio>

void f1(){
    printf("f1\n");
}

void f2(){
    printf("f2\n");
}

int f3(int x){
    return x;
}

void callback(int (*hit)(int), int x){
    int re = hit(x);
    printf("%d\n", re);
}

typedef void (*wtf_fun)();

class Base{
public:
    void ask(){
        printf("Base ask\n");
        answer();
    }

    virtual void answer(){
        printf("Base answer\n");
    }
};

class Sub: public Base{
public:
    virtual void ask(){
        printf("Sub ask\n");
        answer();
    }

    virtual void answer(){
        printf("Sub answer\n");
    }
};

void lec_13(){
    void (*ptr_fun1)() = f1;
    ptr_fun1();
              (*ptr_fun1)();
//the `*` here ^ is optional

    void (*ptr_fun2)() = &f2;
         // the `&` here ^ is optional
    ptr_fun2();
    (*ptr_fun2)();


    callback(f3, 3);

    wtf_fun x = f1;
    x();

    Sub sub;
    Base *p_base = &sub;
    p_base->ask();
}
