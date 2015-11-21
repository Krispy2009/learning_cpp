#include <string>
#include <iostream>



class Sales_data {

	public:
    Sales_data() = default;
    //This is equivalent to the above ( ex 7.14)
    //Sales_data() : bookNo(""), units_sold(0), revenue(0) {}

    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p) :
        bookNo(s), units_sold(n), revenue(p*n) {}

    Sales_data(std::istream&);
	std::string isbn() const {return bookNo;}
	Sales_data& combine(const Sales_data&);


	private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double avg_price() const;

	//friend declarations for nonmember Sales_data operations
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::ostream &print(std::ostream&, const Sales_data&);
	friend std::istream &read(std::istream&, Sales_data&);
};

	Sales_data add(const Sales_data&, const Sales_data&);
	std::ostream &print(std::ostream&, const Sales_data&);
	std::istream &read(std::istream&, Sales_data&);
	
	inline double Sales_data::avg_price() const
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
