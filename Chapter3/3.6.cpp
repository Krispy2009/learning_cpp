#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello World!";
    for (auto &c : str)
    {
        c = 'X';
    }
    std::cout << str <<std::endl;
    return 0;
}