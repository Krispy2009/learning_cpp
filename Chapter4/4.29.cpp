#include <iostream>

int main()
{
    int x[10];
    int *p = x;

    // sizeof(x) = 40 (size of 10 ints) 
    // sizeof(*x) = 4 (size of int)
    // ans = 10
    std::cout << sizeof(x)/sizeof(*x) << std::endl;
    
    // sizeof(p) = 8 (size needed to hold a pointer)  
    // sizeod(*p) = 4 (size of int)
    // ans = 2
    std::cout << sizeof(p)/sizeof(*p) << std::endl;
    
    return 0;
}