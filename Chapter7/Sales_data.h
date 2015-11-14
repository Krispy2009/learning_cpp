#include <string>

struct Sales_data {

	std::string isbn() const {return bookNo;}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	
    Sales_data() = default;
    //This is equivalent to the above ( ex 7.14)
    //Sales_data() : bookNo(""), units_sold(0), revenue(0) {}
    
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p) :
        bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data(std::istream &is)
    {
        read(is, *this);
    }
	
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

};

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


double Sales_data::avg_price() const
{
	if(units_sold)
	{
		return revenue/units_sold;
	}
	else
	{
		return 0;
	}
}

Sales_data& Sales_data::combine(const Sales_data& item)
{
	units_sold += item.units_sold;
	revenue += item.revenue;
	return *this;
}
 
