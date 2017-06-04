#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>


//void test() throw (){ -> can not throw any
void test() throw (const char *){
    throw "aa";
    //throw 123; -> error, only const char* can be thrown
}

template<typename T>
void test(T func){
    func();
}

void lec_18(){
    try{
        test();
    }
    catch(const char*){
        printf("123\n");
    }
    catch(...){
        printf("222\n");
    }

    int i = 3;
    int &j = i;
    auto kk = [i, &j]()-> void {printf("Cool! %d %d\n",i, j);};
    j = 5;
    test(kk);

    auto jj = [i, &j]() {printf("Cool! %d %d\n",i, j);};
    test(jj);


    std::vector<int> vec = {1,2,3,4,5,6};
    std::cout << std::count_if(vec.begin(), vec.end(), [](int i){return i > 6;}) << std::endl;
    std::cout << std::any_of(vec.begin(), vec.end(), [](int i){return i > 2;}) << std::endl;
    std::cout << *std::find_if(vec.begin(), vec.end(), [](int i){return i == 5;}) << std::endl;

}
