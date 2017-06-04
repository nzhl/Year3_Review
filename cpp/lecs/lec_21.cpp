#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>


using namespace std;


class A{
public:
    //explicit A(int i):age(i){
    A(int i):age(i){
        printf("I am called\n");
    }

    //explicit operator int(){
    operator int(){
        return 1314;
    }

    int age;
};

void print(A a){
    cout << "I am print" <<  a.age << endl;
}

void printt(int i){
    cout << i << endl;
}


void lec_21(){
    // if explicit
    print(A(3));

    // if not
    print(3);

    A a(33);

    // if explicit
    printt((int)a);

    // if not
    printt(a);
}
