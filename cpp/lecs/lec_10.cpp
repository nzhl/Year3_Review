#include <iostream>

using namespace std;

class Dog;

class Cat{
    public:
    void attack(Dog &dog);
};

class Dog{
    friend void hunt(Dog &dog);
    friend class Cat;

    int meat = 3;
};


void Cat::attack(Dog &dog){
    std::cout << "Cat attack dog : " << --dog.meat << std::endl;
}

#if 0
class Cat{
    public:
    void attack(Dog &dog){
        std::cout << "Cat attack dog : " << --dog.meat << std::endl;
    }
};
#endif

// class declaration should occur before the friend function
void hunt(Dog &dog){
    std::cout << "Dog hunt for meat : " << ++dog.meat << std::endl;
}

namespace fxxk {
    void fuck(){
        std::cout << "From fxxk::fuck" << std::endl;
    }

    int fk = 3;
} // namespace fxxk

void ff(){
    std::cout << "ok" << std::endl;
}

namespace ok{
    void ff(){
        std::cout << "ok::ok" << std::endl;
    }
}

using namespace ok;


void lec_10(){
    Dog dog;
    hunt(dog);

    Cat cat;
    cat.attack(dog);

    // std::string str
    string str = "fuckk";
    std::cout << str << std::endl;


    fxxk::fuck();
    std::cout << fxxk::fk << std::endl;

    // ff() -> error. ff is ambiguous
    ::ff();
    ok::ff();
}
