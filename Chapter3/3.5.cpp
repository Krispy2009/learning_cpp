#include <iostream>
#include <string>

int main()
{
    std::string word, str;
    
    
    while(std::cin >> word)
    {
        str += word + " " + " ";
    }
    std::cout << str;
    return 0;
}