#if 0
#include <cstdio>

void test(){
    printf("Just test\n");
}

class BigThree{
public:
    // conversion constructor : with one parameter
    BigThree(int test):member(test){
        printf("From int : %d\n", member);
    }

    // forcing explicit constructor
    explicit BigThree(char ch):member(0){
        printf("From char \n");
    }

    BigThree(const BigThree &rhs):member(rhs.member) {
        printf("fuck copy %d\n", member);
    }


    BigThree &operator=(const BigThree &rhs){
        member = rhs.member;
        printf("fuck assign %d\n", member);
        return *this;
    }

#if 1
    operator int(){
        printf("To int\n");
        return 1314;
    }
#endif

private:
    int member = 3;
};

void lec_14(){
    /*
     *
     *  error : test (with int type ) shadow test (function)
     *  int test = 3;
     *  test();
     */

    test();
    int test = 3;
    printf("%d\n", test);


    BigThree a(1314);
    BigThree b(a);
    BigThree c(222);
    c = b;

    printf("------- --------\n");

    BigThree d = 3;

    // won't call the char one since you must call it explicitly
    BigThree e = 'a';

    BigThree f = BigThree('a');

    int x = a;
}
#endif
