#include <iostream>

int main()
{
    int in;
    while(std::cin >> in && in != 42)
    {
        std::cout << in << " is OK.. Keep going!" << std::endl;
    }
    
    
    std::cout << "OH NO! value encountered is " << in << "! We must go now!!!" << std::endl;
    return 0;
}

