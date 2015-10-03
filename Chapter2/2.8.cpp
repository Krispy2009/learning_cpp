#include <iostream>
#include <string>

int main()
{
    std::string kostas("hi");
    
    std::cout << "\062\115\012";
    
    std::cout << "\062\t\115\012";
    
    double wage;
    double salary = wage = 9999.99;
    
    std::cout << salary << " OR "<< wage << std::endl;
    
    return 0;
}