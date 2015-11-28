#include "Sales_data.h"
#include <iostream>

Sales_data first_item(std::cin); //using the constructor that takes a in stream. Every other data member is default initialized. bookNo = "", revenue = 0.0; units_sold =0.

int main(){
    Sales_data next; //Default constructor (with the default str =""), bookNo = "", revenue = 0.0; units_sold =0.
    Sales_data last("9-999-99999-9"); //Default constructor (with the str = 9-999...), bookNo = "9-999-99999-9", revenue = 0.0; units_sold =0.
}