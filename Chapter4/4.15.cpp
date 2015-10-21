#include <iostream>

int main()
{
    double dval; int ival; int *pi;
    //dval = ival = pi = 0;
    //This will fail because we cannot assign a literal integer to a pointer.
    //To fix this we could do:
    //dval = ival = *pi = 0;
    //which would set the dereferenced value of p to 0, not the pointer itself;
    //However pi is a null pointer, which means that dereferencing it leads to 
    // undefined behaviour. To fix this we could initialize pi to &ival; so that it 
    // points somewhere, and then we can dereference it accordingly.
    pi = &ival;
    
    dval = ival = *pi = 0;
    
    std::cout << dval << ", " << ival << ", " << *pi << std::endl;
    
    return 0;
}