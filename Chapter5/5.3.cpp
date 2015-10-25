#include <iostream>
int main()
{
    int sum=0, val =0;
    
    while(val <=10 && (sum+=val, ++val));
    std::cout << sum;
    
    return 0;
}