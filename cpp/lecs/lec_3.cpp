#ifndef DEBUG
#define DEBUG
// case sensitive, i.e : #define Debug is nothing.
#include <cstdio>
#endif
#include <cstring>
#include "lec_3.h"
/*
 * Three header file rule :
 *      1. header file should include everything that it needs.
 *      2. it does not matter if we include the same file multiple time.
 *           + using header file guard
 *      3. can be included in any order.
 */

void lec_3(){

#ifdef DEBUG
    printf("Debug flag on !\n");
#endif


//#if <condition>
#if 1
    printf("Condition is true!\n");
#endif

#if 0
    printf("Condition is false!\n");
#endif

    say();


    char ch = 'a';
    char *ptr_ch = &ch;
    printf("%d\n", *ptr_ch);

    // undefined value ! Force the compiler to read
    // an int value from an char's address.
    printf("%d\n", *(int *)ptr_ch);


    // size 4
    // int arr1[4] = {1,2,3,4}
    //int arr1[] = {1,2,3,4};

    // excess elements, compile error.
    //int arr2[3] = {1,2,3,4};


    // int arr3[] = {1,2,3,0,0}
    int arr3[5] = {1,2,3};
    printf("%d\n", arr3[3]);

    const char *arr4 = "123456";
    printf("%ld\n", strlen(arr4));

    char arr5[] = {'a', 'b', 'c'};
    //!!! undefined value, stop until find 0.
    printf("%ld\n", strlen(arr5));

    // !! array size is too short to hold the string
    // char arr6[5] = "abcde";
    //printf("%ld\n", strlen(arr6));

    char arr6[6] = "abcde";
    printf("%ld\n", strlen(arr6));
}



