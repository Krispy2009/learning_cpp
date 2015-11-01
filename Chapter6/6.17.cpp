#include <iostream>


bool has_caps(const std::string& s)
{
    bool has_caps =false;
    
    for(auto c: s)
    {
        if(std::isupper(c))
        {
            has_caps = true;
            break;
        }
    }
    
    return has_caps;
}

void make_lower(std::string& s)
{
    for(auto &c: s){
        c = tolower(c);
    }
    
}


int main()
{    
    
    std::string a = "Hello World";
    std::cout << has_caps(a) << std::endl;
    make_lower(a);
    std::cout << a << std::endl;
}