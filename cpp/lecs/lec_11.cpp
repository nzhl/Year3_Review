#include <cstdio>
class Base{
    public:
    virtual void test(){
        printf("From Base\n");
    }

    virtual ~Base(){}
};

class Sub:public Base{
    public:
    virtual void test(){
        printf("From Sub\n");
    }
};

class Subb: public Sub{
    public:
    virtual void test(){
        printf("From Subb\n");
    }
};

void lec_11(){
    Base *b = new Base;

    Subb *s = dynamic_cast<Subb*>(b);
    if(s){
        s->test();
    }
    else{
        printf("%p\n", s);
    }

    printf("-----------------------\n");

    Base *bb = new Subb;
    Subb *ss = dynamic_cast<Subb*>(bb);
    if(ss){
        ss->test();
    }
    else{
        printf("%p\n", ss);
    }

    ss->Base::test();
    ss->Sub::test();
    ss->test();


    delete b;
    /**
     *  !!!  make destructor virtual,
     *  otherwise it won't call the
     *  subclass's destructor
     */
    delete bb;

    Subb skt;
    skt.Base::test();
    skt.Sub::test();
    skt.test();

}
