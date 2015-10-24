#include <iostream>

int main()
{
    int i = 5;
    double d = 2.5;
    
    std::cout << (i *= static_cast<int>(d)) << std::endl;
    return 0;
}