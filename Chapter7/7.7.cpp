#include <iostream>
#include "Sales_data.h"

int main()
{
    Sales_data item, currItem;
    int count = 1;
    if(read(std::cin, currItem))
    {
		while(read(std::cin, item))
        {
            if(item.isbn() == currItem.isbn())
            {
                currItem = add(currItem, item);
            }
            else
            {
                print(std::cout, currItem);
				std::cout << std::endl;
                currItem = item;
            }
        }
        
        print(std::cout, currItem);
		std::cout << std::endl;
  
        return 0;
    }
    else
    {
        std::cout << "OH NO! No dataaaaaa" << std::endl;
        return -1;
    }
}
