#include <iostream>



int factorial(int val)
{
    if(val >1)
    {
        //If we use val-- :  warning: unsequenced modification and access to 'val'
        
        return factorial(val-1)*val;
    }
    return 1;
}

int main()
{
    std::cout << factorial(5) <<std::endl;
}