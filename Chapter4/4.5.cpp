#include <iostream>
int main()
{
    //(a) (-30*3) + (21/5) = -86
    std::cout << -30 * 3 + 21 / 5 << std::endl;

    //(b)  -30 + ((3*21)/5) = -18
    std::cout << -30 + 3 * 21 / 5 << std::endl;
    
    //(c) ((30/3)*21)%5 = 0
    std::cout << 30 / 3 * 21 % 5 <<std::endl;
    
    //(d) ((-30/3)*21)%4 = 2
    std::cout << 30 / 3 * 21 % 4 <<std::endl;
    return 0;
}