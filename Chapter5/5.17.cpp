#include <iostream>
#include <vector>

int main()
{
    bool is_prefix = true;
    std::vector<int> a = {0,1,1,2};
    std::vector<int> b = {0,1,1,2,3,4,8};
    
    std::vector<int> smallest;
    
    if(a.size() > b.size())
    {
        smallest = b;
    }
    else
    {
        smallest = a;
    }
    
    
    for(int i=0; i < smallest.size(); i++)
    {
        if(a[i] != b[i])
        {
            is_prefix = false;
        }
    }
    
    if(is_prefix)
    {
        std::cout << "Smallest vector is prefix of the other" << std::endl;
    }
    else
    {
        std::cout << "Smallest vector is not a prefix of the other" <<std::endl;
    }
    
    return 0;
    
}