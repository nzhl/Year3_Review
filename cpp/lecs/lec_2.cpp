
#include <iostream>
#include <string>


#define max(a, b) (((a) > (b)) ? (a) : (b))


void lec_2(){

    auto c_str = "c_str : I am fucking c type!";
    auto cpp_str = std::string("cpp_str : I am fucking cpp type!");

    std::cout << c_str << std::endl;
    std::cout << cpp_str << std::endl;


    //std::cout << c_str.size() << std::endl; => error code.
    //std::cout << cpp_str.size() << std::endl;

    int a = 1;
    int b = 1;
    //std::cout << max(a++, b++) << std::endl;

    for(int i = 0; i < 10; ++i){
        std::cout << a  << ' ' <<  b << ' ' ;
        std::cout << max(a++, b++) << std::endl;
    }
}
