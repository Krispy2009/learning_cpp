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

// Ans to 7.38, 7.39: We cannot make this a default constructor (by defaulting the only parameter)
// because there is already one and that would mean that we would have 2. No can do!
Sales_data::Sales_data(std::istream &is) : Sales_data()
 {
     std::cout << "This is the constructor that uses an istream" << std::endl;
     read(is, *this);
 }


Sales_data& Sales_data::combine(const Sales_data& item)
{
 	units_sold += item.units_sold;
 	revenue += item.revenue;
 	return *this;
}
