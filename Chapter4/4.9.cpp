#include <iostream>

int main()
{
    const char *cp = "Hello World";

    //The if condition first checks if cp is a valid pointer and then checks if its 
    // value is true (i.e it is not null)
    // Checking cp first makes sure it is safe to dereference it before actually doing it.
    
    if(cp && *cp)
    {
        std::cout << cp << ": " <<  *cp <<std::endl;
    }
    
    return 0;
}