include "Sales_data.h"

int main()
{
    
    std::string bookNo;
    unsigned n = 0;
    double p = 0;
    
    a = Sales_data();
    b = Sales_data(bookNo);
    c = Sales_data(bookNo,n,p);
    d = Sales_data(std::cin);
    
    return 0;
}