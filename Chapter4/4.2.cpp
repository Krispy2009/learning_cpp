#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec = {99,5,10};
    
    //(a) * vec.begin() -->  *(vec.begin()) --> will print the 1st element
    std::cout << * vec.begin() <<std::endl;
    
    //(b) * vec.begin() + 1 --> *(vec.begin())  + 1 --> will print the 1st element + 1.
    std::cout << * vec.begin() + 1 <<std::endl;
    return 0;
}