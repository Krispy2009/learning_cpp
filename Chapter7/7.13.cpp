#include "Sales_data.h"
#include <iostream>



int main()
{
    Sales_data total(std::cin);
    Sales_data trans(std::cin);
    do {
        if(total.isbn() == trans.isbn())
        {
            total.combine(trans);
        }
        else
        {
            print(std::cout, total) << std::endl;
            total = trans;
        }
    } while(read(std::cin, trans));
    
    print(std::cout, total);
    return 0;
}