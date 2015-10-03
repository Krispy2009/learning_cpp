

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, currItem;
    int count = 1;
    if(std::cin >> currItem)
    {
        while(std::cin >> item)
        {
            if(item.isbn() == currItem.isbn())
            {
                currItem += item;
            }
            else
            {
                std::cout << currItem << std::endl;
                currItem = item;
            }
        }
    
        std::cout << currItem << std::endl;
 
        return 0;
    }
    else
    {
        std::cout << "OH NO! No dataaaaaa" << std::endl;
        return -1;
    }
}