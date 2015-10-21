#include <iostream>

int main()
{
    int i;
    //This will not compile, because we cannot assign i to 42(a literal).
    if(42 = i)
        std::cout << 'oh my' << std::endl;
        
    //assigning 42 to i returns 42 which is a true value 
    // (The value is true as long as the value we assign to i is not 0).
    // So this if will evaluate to true. However it is probably not what we 
    // intended to do.
    if(i = 42)
    {    
        std::cout << (i=42) << std::endl;
        std::cout << "it's OK but probably not what we intended" << std::endl;

    }
    
    return 0;
}