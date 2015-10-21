#include <iostream>

int main()
{
    int in;
    while(std::cin >> in)
    {
        if(in%2 == 0)
        {
            std::cout << in << " is even" << std::endl;
        }
        else
        {
            std::cout << in << " is odd" << std::endl;
        }
    }
    return 0;
}