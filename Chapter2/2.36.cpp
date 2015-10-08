#include <iostream>
int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    std::cout << c << std::endl;
    decltype((b)) d = a;
    std::cout << d << std::endl;
    
    ++c;
    std::cout << c << std::endl;
    
    ++d;
    std::cout << d << std::endl;
    std::cout << "a: "<< a << std::endl;
    std::cout << "b: "<< b << std::endl;
    
    
    
    return 0;
    
}