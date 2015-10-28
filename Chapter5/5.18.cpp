#include <iostream>

int main()
{
    //(a) we need brackets for the do block.
    
    do {
        int v1, v2;
        std::cout << "Please enter two numbers to sum: ";
        if(std::cin >> v1 >> v2)
        {
            std::cout << "Sum is: " << v1+v2 << std::endl;
        }
        
    }
    while(std::cin);
    
    //(b) cannot define variables in the while condition.
    int ival = 3;
    do {
        //int ival = get_response();
        std::cout << ival <<  std::endl;
        --ival;
    }
    while(ival);
    
    //(c) similarly we cannot define a variable in the do block and use it inthe
    // while condition, because it is only available in that scope. To solve this
    // problem just move the variable declaration outside the do block (like above).
}