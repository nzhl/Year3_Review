#include <iostream>

template <typename T>
T max(T lhs, T rhs){
    return lhs > rhs ? lhs : rhs;
}

void lec_16(){
    std::cout << max(5, 3) << std::endl;
}
