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
    
    
    std::string str2 = "Hello World!";
    decltype(str2.size()) idx = 0;
    while(idx < str2.size())
    {
        str2[idx] = 'X';
        ++idx;
    }
    std::cout << str2 << std::endl;
    
    
    std::string str3 = "Hello World!";
    
    
    for(decltype(str3.size()) idx = 0; idx < str3.size(); ++idx)
    {
        str3[idx] = 'X';
    }
    std::cout << str3 << std::endl;
    
    return 0;
    
}