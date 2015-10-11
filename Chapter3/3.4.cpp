#include <iostream>
#include <string>

int larger()
{
    std::string s1, s2;
    
    std::cin >> s1;
    std::cin >> s2;
    
    if(s1==s2)
    {
        std::cout << "Strings are of equal length!! WOOT WOOT \n";
    }
    else
    {
        if(s1 > s2)
        {
            std::cout << s1 + " is bigger \n";
        }
        else
        {
            std::cout << s2 + " is bigger \n";
        }
    }
    return 0;
}


int longer()
{
    std::string s1, s2;
    
    std::cin >> s1;
    std::cin >> s2;
    
    if(s1.size() == s2.size())
    {
        std::cout << "Strings are equal!! WOOT WOOT \n";
    }
    else
    {
        if(s1.size() > s2.size())
        {
            std::cout << s1 + " is longer \n";
        }
        else
        {
            std::cout << s2 + " is longer \n";
        }
    }
    return 0;
}

int main()
{
    larger();
    longer();
    
    return 0;
}