#include <iostream>
#include "Chapter6.h"

int counts()
{
    static int count = 0;
    return count++;
}

int main()
{
    for(int i=0; i< 10; i++)
    {
        std::cout << counts() << std::endl;
    }
    
    std::cout << fact(10) << std::endl;
}