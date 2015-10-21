#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    
    if (a > b && b > c && c > d)
    {
        std::cout << a << " > " << b << " > "
            << c << " > " << d << std::endl;
        std::cout << "congrats!" << std::endl;
    }
    else {
        std::cout << "the values are not in decending order :( " <<std::endl;
    }
    
    return 0;
}
