#include <iostream>

int main()
{
    int x = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
    
    // x is ((12/3)*4) + (5*15) + ((24%4)/2)
    // which equals 16 + 75 + 0 = 91
    
    std::cout << x << std::endl;
    return 0;

}