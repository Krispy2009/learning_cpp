#include <iostream>

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
    Sales_data item, currItem;
    int count = 1;
    if(std::cin >> currItem.bookNo >> currItem.units_sold >> currItem.revenue)
    {
		while(std::cin >> item.bookNo >> item.units_sold >> item.revenue)
        {
            if(item.bookNo == currItem.bookNo)
            {
                currItem.units_sold += item.units_sold;
                currItem.revenue += item.revenue;
            }
            else
            {
                std::cout << "BookNo: " << currItem.bookNo
						  << " Items sold: " << currItem.units_sold
						  << " Revenue: " <<currItem.revenue
						  << std::endl;
                currItem = item;
            }
        }
                std::cout << "BookNo: " << currItem.bookNo
						  << " Items sold: " << currItem.units_sold
						  << " Revenue: " <<currItem.revenue
					  	  << std::endl;
        return 0;
    }
    else
    {
        std::cout << "OH NO! No dataaaaaa" << std::endl;
        return -1;
    }
}
