#include <iostream>

int main()
{
    /* 
        Overflow means that there will not be enough space to save the value,
        and the behaviour of the program is undefined. 
    
        The following 3 expressions will overflow
    */
    
    short a = 32767;
    ++a;
    //a becomes  -32768 (wraps around)
    std::cout << a <<std::endl;
    
    unsigned short b = 65535;
    ++b;
    //b becomes 0 (wraps around)
    std::cout << b << std::endl;
    
    short c = -32768;
    --c;
    //c becomes 32767 (wraps around)
    std::cout << c << std::endl;
    
    return 0;
    
}
