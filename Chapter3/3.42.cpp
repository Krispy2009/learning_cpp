#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1 = {1,2,3,4,5};
    int a1[v1.size()];
    int *p = a1;
    for(int i: v1)
    {
        *p = i;
        ++p;
    }
    
    for(int i: a1)
    {
        std::cout << i << std::endl;
    }
    
    return 0;
}