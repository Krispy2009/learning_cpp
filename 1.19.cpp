#include <iostream>

int main()
{
    int v1=0, v2=0;
    std::cout << "Please type 2 numbers: " << std::endl;
    std::cin >> v1 >> v2;
    
    if(v2 < v1)
    {
        int temp = v2;
        v2 = v1;
        v1 = temp;
    }
    
    while(v1 <= v2)
    {
        std::cout << v1 << std::endl;
        v1++;
    }
    return 0;
}