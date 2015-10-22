#include <iostream>

int main()
{
    short s = 2;
    int i = 3;
    double d = 2.3;
    long l = 22223;
    float  f = 1.2;
    char c = 'a';
    bool b = true;
    
    
    std::cout << "Size of short " << sizeof(s) << std::endl;
    std::cout << "Size of integer " << sizeof(i) << std::endl;
    std::cout << "Size of double " << sizeof(d) << std::endl;
    std::cout << "Size of long " << sizeof(l) << std::endl;
    std::cout << "Size of float " << sizeof(f) << std::endl;
    std::cout << "Size of char " << sizeof(c) << std::endl;
    std::cout << "Size of bool " << sizeof(b) << std::endl;
    
    return 0;
}