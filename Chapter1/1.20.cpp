#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1;
    while(std::cin >> item1)
    {
        std::cout << "Your book is: " << item1 << std::endl;
    }
    
    return 0;
}