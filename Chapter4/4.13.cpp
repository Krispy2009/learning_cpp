#include <iostream>

int main()
{
    int i; double d;
    //(a) d = 3 , i = 3
    d = i = 3.5;
    std::cout << "d: " << d << " and  i: " << i <<std::endl;
    
    //(b) d = 3.5, i = 3
    
    i = d = 3.5;
    std::cout << "d: " << d << " and i: " << i <<std::endl;

    return 0;
}