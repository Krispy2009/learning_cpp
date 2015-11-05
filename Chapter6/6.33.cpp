#include <iostream>
#include <vector>


int print_vector(std::vector<int> v, int i)
{
    if(i>0)
    {
        //If we use val-- :  warning: unsequenced modification and access to 'val'
        std::cout << v[i] <<std::endl;
        return print_vector(v, i-1);
    }
    return v[i];
}

int main()
{
    std::vector<int> v = {9,2,4,5,2,3,4,5,1,2,4};
    std::cout << print_vector(v, 10) <<std::endl;
}