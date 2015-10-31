#include <iostream>

int reset(int &a)
{
    a = 0;
    return 0;
}

int main()
{
    
    int n = 23;
    
    std::cout << "n = " << n <<std::endl;
    std::cout << "Reset n!" <<std::endl;
    reset(n);
    
    std::cout << "now n = " << n << std::endl;
    return 0;
}