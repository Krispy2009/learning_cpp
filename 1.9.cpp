#include <iostream>

int main()
{
    int sum = 0, val = 50;
    while (val <= 100)
    {
        sum += val;
        val++;
    }
    std::cout << "The sum of range(50,101) is: " << sum << std::endl;
    std::cout << "And now we shall count down: " << std::endl;
    
    val = 10;
    while(val >= 0)
    {
        std::cout << val << std::endl;
        val--;
    }
    return 0;
}