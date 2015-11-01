#include <iostream>

/*
    This can only be called on a string object. So is_empty("HELLO") would fail at 
    compile time.
    Corrected version:
*/

bool is_empty(const std::string& s)
{
    return s.empty();
}

int main()
{
    std::string a = "YO";
    
    std::cout << is_empty(a) << std::endl;
    std::cout << is_empty("") << std::endl;
    std::cout << is_empty("HI!") << std::endl;
}