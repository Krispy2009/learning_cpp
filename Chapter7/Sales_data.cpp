#include "Sales_data.h"
#include <iostream>

Sales_data add(const Sales_data &one, const Sales_data &two )
{
    Sales_data sum = one;
    sum.combine(two);
    return sum;
}
std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();
    return os;
}
std::istream &read(std::istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

Sales_data::Sales_data(std::istream &is)
 {
     read(is, *this);
 }


Sales_data& Sales_data::combine(const Sales_data& item)
{
 	units_sold += item.units_sold;
 	revenue += item.revenue;
 	return *this;
}
