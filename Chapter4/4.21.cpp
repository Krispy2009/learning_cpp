#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1 = {1,2,3,4,5,6,7,8,9};
    //using a reference because we want to change the value.
    for(auto &i: v1)
    {
        i = (i%2==0)? i : i*2;
    }
    
    //not using reference because we just want to print the value.
    for (auto j: v1)
    {
        std::cout << j << " ";
    }
    std::cout << std::endl;

    return 0;
}