#include <iostream>
#include <vector>

int main(){
    int a1[] = {1,2,3,4};
    std::vector<int> v1(std::begin(a1), std::end(a1));
    
    for(int i: v1)
    {
        std::cout << i << std::endl;
    }
    return 0;
}