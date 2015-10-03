#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1, sum;
    while(std::cin >> item1)
    {
        sum += item1;
    }
    std::cout << "The sum is: " << sum << std::endl;
}