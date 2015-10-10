#include <iostream>
#include <string>
#include "Sales_data.h"

// rewriting ex 1.20 using Sales_data
int ex1()
{
    Sales_data item;
    int price = 0;
    
    while(std::cin >> item.bookNo >> item.units_sold >> price)
    {
        item.revenue = item.units_sold * price;
        std::cout << "Transaction: " 
                  << item.bookNo << " "
                  << item.units_sold << " "
                  << item.revenue
                  << std::endl; 
    }
    return 0;
}

// rewriting ex1.21 using Sales_data
int ex2(){
    
    Sales_data item1, item2;
    int price = 0;
    
    //Reading data into both items
    std::cin >> item1.bookNo >> item1.units_sold >> price;
    item1.revenue = item1.units_sold * price;
    
    std::cin >> item2.bookNo >> item2.units_sold >> price;
    item2.revenue = item2.units_sold * price;
    
    //if it is the same ISBN then do the addition. If not, throw error
    if(item1.bookNo == item2.bookNo)
    {
        int totalCount = item1.units_sold + item2.units_sold;
        double totalRevenue = item1.revenue + item2.revenue;
        
        std::cout << item1.bookNo << " " 
                  << totalCount << " "
                  << totalRevenue << " ";
                  
                  if(totalCount > 0)
                  {
                      std::cout << totalRevenue/totalCount;
                  }
                  std::cout << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Transactions must refer to the same ISBN" << std::endl;
        return -1;
    }
    
    
}
//  read a series of transactions and sum their counts and revenues
//  assuming transactions are grouped together.
//  This is my version of the bookstore program presented in p.25, rewritten
//  using Sales_data instead of Sales_item.
int ex3()
{
    Sales_data item, curr_item;
    int sum, price, count;
    
    if(std::cin >> curr_item.bookNo >> curr_item.units_sold >>price) {
    curr_item.revenue = curr_item.units_sold * price;
    count = 1;
    sum = curr_item.revenue;
    
    while(std::cin >> item.bookNo >> item.units_sold >> price)
    {
        item.revenue = item.units_sold * price;
        
        if(curr_item.bookNo == item.bookNo)
        {
            count +=1;
            sum += item.revenue;
        }
        else
        {
            std::cout << "We have " << count 
                      << " txn(s) with revenue sum " << sum
                      << " for ISBN " << curr_item.bookNo << std::endl;
            sum = item.revenue;
            count = 1;
            curr_item = item;
                  
        }

    }
    std::cout << "We have " << count 
                 << " txn(s) with total revenue " << sum 
                 << " for ISBN " << curr_item.bookNo << std::endl;
    }
    else
    {
        std::cerr << "No data!?" << std::endl;
        return -1;
    }
    return 0;

}


int main()
{
    //ex1();
    //ex2();
    ex3();
    return 0;
}