#include <vector>
#include <iostream>
#include <string>
#include <functional>


template <typename T>
class Sam{
    public:
    void hello(T input){
        std::cout << input << std::endl;
    }

    T hunt(T input) const;
};

template<typename T>
T Sam<T>::hunt(T input) const {
    std::cout << input << std::endl;
    return T();
}

class MyFunctor{
public:
    void operator()(){
        printf("xixi\n");
    }
};

static void wtf(){
    printf("wft\n");
}

void lec_17(){
    std::vector<int> v(3);
    std::cout << v.size() << std::endl;

    std::vector<int> vv{3,1};
    std::cout << vv.size() << std::endl;

    Sam<std::string> sam;
    sam.hello("I am a hunter!");
    sam.hunt("I am happy!");

    MyFunctor mf;
    mf();

    // both function ptr or functor is ok
    std::function<void(void)> f1 = wtf;
    f1();
    std::function<void(void)> f2 = mf;
    f2();

}
