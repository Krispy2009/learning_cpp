#include <iostream>

int main()
{
    char ca1[] = "hello";
    char ca2[] = "world";
    char ca3[11];
    
    std::strcpy(ca3, ca1);
    std::strcat(ca3, ca2);
    
    std::cout << ca3 << std::endl;
    
}