#include <iostream>
#include <cstddef>

int main()
{
    int arr[10] = {1,2,3,4,5,1,2,3,4,5};
    
    for(int *p=arr; p!=std::end(arr); p++)
    {
        *p = 0;
    }
    
    for(auto i: arr){
        std::cout << i << std::endl;
    }
}