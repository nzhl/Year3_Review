#include <iostream>
#include <list>
#include <array>
#include <algorithm>
#include <vector>

void lec_22(){
#if 0
    // -------------- List  --------------------------------------------------------
    std::cout << "-------------------------- List --------------------------------" << std::endl;
    std::list<int> list{1,2,3,4,5,6};

    // std::sort must be used for the container which support random access
    // which is not supported by list. So the following code will not compile.
    // list[1]  -> error, not supported
    //std::sort(list.begin(), list.end(), [](int l, int r){return l >= r;});

    // the following two are quite the same.
    //list.sort([](int l, int r){return l < r;});
    list.sort();

    for(auto i = list.begin(), j = list.end(); i != j; ++i){
        std::cout << *i << std::endl;
    }


    std::cout << "-----------" << std::endl;

    std::cout << "size : " << list.size() << std::endl;
    list.insert(list.cend(), 8);
    std::cout << " after insert end-----------" << std::endl;
    std::cout << "size : " << list.size() << std::endl;
    for(auto i = list.begin(), j = list.end(); i != j; ++i){
        std::cout << *i << std::endl;
    }
    // list do not support  (iterator + 2)
    //std::cout << *(list.begin() + 2) << std::endl;

    list.pop_front();
    list.pop_back();
    list.push_back(10);

    std::cout << "- after pop ----------" << std::endl;
    for(auto i = list.begin(), j = list.end(); i != j; ++i){
        std::cout << *i << std::endl;
    }

    std::list<int> list2;
    std::cout << list2.size() << std::endl;

    std::cout << "-------  list 2----------" << std::endl;

    std::copy(list.begin(), list.end(), std::back_inserter(list2));
    std::cout << list2.size() << std::endl;

    for(auto i = list2.begin(), j = list2.end(); i != j; ++i){
        std::cout << *i << std::endl;
    }

#endif

#if 0
    std::cout << "---------------  Array ------------------------------------" << std::endl;


    std::array<int, 5> array = {5,4,3,2,1};

    std::cout << array.size() << std::endl;
    std::cout << *(array.begin() + 2) << std::endl;

    std::sort(array.begin(), array.end());

    for(auto const &each : array){
        std::cout << each << std::endl;
    }

    std::cout << "------------------- array2 -----------------" << std::endl;
    std::array<int, 5> array2;
    std::copy(array.begin(), array.end(), array2.begin());
    for(auto const &each : array2){
        std::cout << each << std::endl;
    }

#endif

#if 1
    std::cout << "---------------  Vector ------------------------------------" << std::endl;

    std::vector<int> vector = {3,4,3,2,1};
    vector[8] = 5;

    for(auto i = vector.crbegin(), j = vector.crend(); i != j; ++i){
        std::cout << *i << std::endl;
    }
    std::cout << vector.empty() << std::endl;

    std::cout << std::count(vector.begin(), vector.end(), 3) << std::endl;

    std::vector<int> vector2;
    copy(vector.begin(), vector.end(), std::back_inserter(vector2));
    copy(vector2.begin(), vector2.end(), std::ostream_iterator<int>(std::cout, "fuck"));


#endif
}
