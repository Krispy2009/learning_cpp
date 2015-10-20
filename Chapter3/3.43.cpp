#include <iostream>

int one_dimensional_arrays()
{
    int ia[] = {1,2,3,4,5};
    
    //Version 1. using range for.
    std::cout << "Version 1: ";
    for(int i: ia)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    
    // An array's size is the number of elements * the size of the element;
    // So we need to divide the size of the whole array by the size of each element
    // to get the number of elements.
    int sz = sizeof(ia)/sizeof(*ia);
    
    std::cout << "Version 2: ";
    for(int i=0; i < sz; i++)
    {
        std::cout << ia[i] << ' ';
    }
    std::cout << std::endl;
    
    
    std::cout << "Version 3: ";
    for(int *p = std::begin(ia); p < std::end(ia); ++p )
    {
        std::cout << *p << ' ';
    }
    std::cout << std::endl;
    
    return 0;
}

int main()
{
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    std::cout << "Version 1:" <<std::endl;
    for(int (&row)[4] : ia )
    {
        for(int &col : row)
        {
            std::cout << col << ' ';
        }
        std::cout << std::endl;
    }
    
    int sz = sizeof(ia)/sizeof(*ia);
    
    std::cout << "Version 2: " << std::endl;
    for(int i = 0; i < sz; i++ )
    {
        int inner_sz = sizeof(ia[i])/sizeof(*ia[i]);
        for(int j=0; j < inner_sz; j++)
        {
            std::cout << ia[i][j] << ' ';
        }
        std::cout << std::endl;
        
    }
    
    std::cout << "Version 3:" << std::endl;
    for(int (*p)[4] = std::begin(ia); p < std::end(ia); ++p)
    {
        for(int *q = std::begin(*p); q < std::end(*p); ++q)
        {
            std::cout << *q << ' ';
        }
        std::cout << std::endl;
    }
    
    return 0;
    
}