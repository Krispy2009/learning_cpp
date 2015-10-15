#include <iostream>
#include <cstddef>
#include <vector>

int with_arrays()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
    std::cout << "Using Arrays" << std::endl;
    for (size_t ix=0; ix < array_size; ++ix)
    {
        ia[ix] = ix;
        std::cout << "index: " << ix << " value:" << ix << std::endl;
    }
    
    int ia2[array_size];
    
    for(size_t ix=0; ix < array_size; ++ix)
    {
        ia2[ix] = ia[ix];
        std::cout << "ia2: " << ia2[ix] << " ia:" << ia[ix] << std::endl;
        
    }
    return 0;
}

int main()
{
    //Rewriting the above using vectors
    with_arrays();
    std::vector<int> v1;
    std::cout << "Using Vectors" << std::endl;
    
    for(int i=0; i < 10; i++)
    {
        v1.push_back(i);
        std::cout << v1[i] << ' ';
    }
    std::cout << std::endl;
    
    std::vector<int> v2 = v1;
    
    for(int i=0; i <v2.size(); i++)
    {
        std::cout << v2[i] << ' ';
    }
    std::cout << std::endl;
    return 0;
}