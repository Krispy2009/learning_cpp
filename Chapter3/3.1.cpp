#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include <iostream>

int ex1_9()
{
    int sum = 0, val = 50;
    while (val <= 100)
    {
        sum += val;
        val++;
    }
    cout << "The sum of range(50,101) is: " << sum << endl;
    cout << "And now we shall count down: " << endl;
    
    val = 10;
    while(val >= 0)
    {
        cout << val << endl;
        val--;
    }
    return 0;
}

int ex1_11()
{
    int v1=0, v2=0;
    cout << "Please type 2 numbers: " << endl;
    cin >> v1 >> v2;
    while(v1 <= v2)
    {
        cout << v1 << endl;
        v1++;
    }
    return 0;
}

#include <iostream>
#include <string>

struct Sales_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

// rewriting ex 1.20 using Sales_data
int ex1()
{
    Sales_data item;
    int price = 0;
    
    while(cin >> item.bookNo >> item.units_sold >> price)
    {
        item.revenue = item.units_sold * price;
        cout << "Transaction: " 
                  << item.bookNo << " "
                  << item.units_sold << " "
                  << item.revenue
                  << endl; 
    }
    return 0;
}

// rewriting ex1.21 using Sales_data and without std::
int ex2(){
    
    Sales_data item1, item2;
    int price = 0;
    
    //Reading data into both items
    cin >> item1.bookNo >> item1.units_sold >> price;
    item1.revenue = item1.units_sold * price;
    
    cin >> item2.bookNo >> item2.units_sold >> price;
    item2.revenue = item2.units_sold * price;
    
    //if it is the same ISBN then do the addition. If not, throw error
    if(item1.bookNo == item2.bookNo)
    {
        int totalCount = item1.units_sold + item2.units_sold;
        double totalRevenue = item1.revenue + item2.revenue;
        
        cout << item1.bookNo << " " 
                  << totalCount << " "
                  << totalRevenue << " ";
                  
                  if(totalCount > 0)
                  {
                      cout << totalRevenue/totalCount;
                  }
                  cout << endl;
        return 0;
    }
    else
    {
        cout << "Transactions must refer to the same ISBN" << endl;
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
    
    if(cin >> curr_item.bookNo >> curr_item.units_sold >>price) {
    curr_item.revenue = curr_item.units_sold * price;
    count = 1;
    sum = curr_item.revenue;
    
    while(cin >> item.bookNo >> item.units_sold >> price)
    {
        item.revenue = item.units_sold * price;
        
        if(curr_item.bookNo == item.bookNo)
        {
            count +=1;
            sum += item.revenue;
        }
        else
        {
            cout << "We have " << count 
                      << " txn(s) with revenue sum " << sum
                      << " for ISBN " << curr_item.bookNo << endl;
            sum = item.revenue;
            count = 1;
            curr_item = item;
                  
        }

    }
    cout << "We have " << count 
                 << " txn(s) with total revenue " << sum 
                 << " for ISBN " << curr_item.bookNo << endl;
    }
    else
    {
        cerr << "No data!?" << endl;
        return -1;
    }
    return 0;

}



int main()
{
    ex1_9();
    ex1_11();
    ex1(); 
    ex2();
    ex3();
}