#include <iostream>

int main()
{
    int ia[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    
    std::cout << "Version 1:" <<std::endl;
    for(auto &row : ia )
    {
        for(auto &col : row)
        {
            std::cout << col << ' ';
        }
        std::cout << std::endl;
    }
    
    int sz = sizeof(ia)/sizeof(*ia);
    
    std::cout << "Version 2: " << std::endl;
    for(auto i = 0; i < sz; i++ )
    {
        int inner_sz = sizeof(ia[i])/sizeof(*ia[i]);
        for(auto j=0; j < inner_sz; j++)
        {
            std::cout << ia[i][j] << ' ';
        }
        std::cout << std::endl;
        
    }
    
    std::cout << "Version 3:" << std::endl;
    for(auto *p = std::begin(ia); p < std::end(ia); ++p)
    {
        for(auto *q = std::begin(*p); q < std::end(*p); ++q)
        {
            std::cout << *q << ' ';
        }
        std::cout << std::endl;
    }
 
    return 0;   
}