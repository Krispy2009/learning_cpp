#include <iostream>
#include <vector>
#include <cstddef>
int cmp_array()
{
    constexpr size_t sz1 = 5;
    constexpr size_t sz2 = 5;
    int arr1[sz1] = {1,2,3,4,5}, arr2[sz2] = {1,2,3,4,5};

    if(sz1 == sz2)
    {
        int *p1 = arr1;
        int *p2 = arr2;
        
        while(p1 != std::end(arr1))
        {
            if(*p1 != *p2)
            {
                std::cout << "Arrays are not the same" << std::endl;
                return -1;
            }
            ++p1; ++p2;
        }
        std::cout << "Arrays are the same!" <<std::endl;
        return 0;
    }
    else
    {
        std::cout << "Arrays do not have the same size, so they can't be equal" <<std::endl;
        return -1;
    }
}

int cmp_vector()
{
    std::vector<int> v1 = { 1,2,3};
    std::vector<int> v2 = { 2,1,3};
    
    if(v1 == v2){
        
        std::cout << "vectors are the same" <<std::endl;
        return 0;
    }
    else
    {
        std::cout << "vectors are not the same " <<std::endl;
        return -1;
    }
    
}

int main()
{
    cmp_array();
    cmp_vector();
    
}