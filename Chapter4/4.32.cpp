#include <iostream>

int main()
{
    
    //This assigns the pointer ptr the first element of ia and the ix to 0;
    // While the ix is not 5 and the pointer ptr is not pointing to an address
    // 5 past the start of ia, increment both ix and ptr;
    
    constexpr int size = 5;
    int ia[size] = {1,2,3,4,5};
    for(int *ptr = ia, ix = 0; ix !=size && ptr != ia+size; ++ix, ++ptr)
    {
        std::cout << ix << ": " << *ptr << std::endl;
    }
    
    return 0;
}