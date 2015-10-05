#include <iostream>

int main()
{
    int ival=42;
    int *p;
    p = &ival;
    
    std::cout << *p << " at address " << p << std::endl;
    
    *p = 0;
    
    std::cout << *p << " at address " << p << std::endl;
}