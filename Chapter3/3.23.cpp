#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1;
    for(int i=0; i <10; ++i)
    {
        v1.push_back(i);
    }
    
    for(auto it = v1.begin(); it != v1.end(); ++it )
    {
        *it = *it * 2;
        std::cout << *it <<std::endl;
    }
    return 0;
}