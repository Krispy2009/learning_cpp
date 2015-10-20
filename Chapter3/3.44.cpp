#include <iostream>

int main()
{
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    using int_array = int[4];
    
    std::cout << "Version 1:" <<std::endl;
    for(int_array &row : ia )
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
    for(int_array *p = std::begin(ia); p < std::end(ia); ++p)
    {
        for(int *q = std::begin(*p); q < std::end(*p); ++q)
        {
            std::cout << *q << ' ';
        }
        std::cout << std::endl;
    }
 
    return 0;   
}