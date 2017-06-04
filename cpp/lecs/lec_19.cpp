#include <iostream>


class B{
public:
    int x = 3;

#if 1
    virtual B &operator=(const B& rhs){
        this->x = rhs.x;
        return *this;
    }

#endif

};

class S : public B{
public:
    S(){
        printf("hello\n");
    }

    int getX() const{
        return x;
    }

#if 1
    virtual S &operator=(const S& rhs){
        this->B::operator=(rhs);
        this->x = rhs.x;
        return *this;
    }

    virtual B &operator=(const B& rhs){
        try {
            // if use a base class to assign a subclass
            const S &rsub = dynamic_cast<const S&>(rhs);
            *this = rsub;
        } catch (std::bad_cast b) {
            this->B::operator=(rhs);
        }
        return *this;
    }
#endif

    int x = 5;
};


void lec_19(){
    S s;
    B *p = &s;
    // 3 5
    printf("%d\n", p->x);
    printf("%d\n", s.getX());

    printf("%d\n", s.B::x);
    printf("%d\n", s.x);

    printf("----------\n");


    // slicing problem
    S x, y;
    y.B::x = 20;
    y.x = 10;
    B &rx = x;
    B &ry = y;
    rx = ry;
    printf("%d %d\n", x.B::x, x.x);
}
