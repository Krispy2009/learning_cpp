#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string str, out_str;
    
    std::cin >> str;
    
    for(auto &c :str)
    {
        if(!std::ispunct(c))
        {
            out_str += c;
        }
    }
    std::cout << out_str <<std::endl;
    return 0;
}