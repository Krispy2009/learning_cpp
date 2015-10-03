

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item, currItem;
    int count = 1;
    std::cin >> currItem;
    while(std::cin >> item)
    {
        if(item.isbn() == currItem.isbn())
        {
            count += 1;
        }
        else
        {
            std::cout << "We have " << count << " transactions for the item with ISBN: " 
            << currItem.isbn() << std::endl;
            currItem = item;
            count = 1;
        }
    }
    
    std::cout << "We have " << count << " transactions for the item with ISBN: " 
    << currItem.isbn() << std::endl;
 
    return 0;
}