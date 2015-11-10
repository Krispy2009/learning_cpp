#include <cassert>
#include <iostream>

int main()
{
    std::string s;
    while(std::cin >> s && s != "hello") {}
    assert(s == "hello");
    
    // The following might be a good idea when we want to check if the user has stopped 
    // the while loop without actually entering the sought after word (hello).
    
    //If the user exits using control + d, std::cin will be false and the assertion will
    // fail. However, the assertion does not fail if the user types hello. 
    
    // A clearer example though would be to use assert(s == hello").

    return 0;
    
};