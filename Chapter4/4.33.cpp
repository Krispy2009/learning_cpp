#include <iostream>

int main()
{
    int x = 0, y = 5;
    
    // it is really (true ? (++x, ++y) : --x); --y
    true ? ++x, ++y : --x, --y;
    std::cout << x << ' ' << y << std::endl;
    
    
    // it is really (false ? (++x, ++y) : --x); --y
    false ? ++x, ++y : --x, --y;
    std::cout << x << ' ' << y << std::endl;
    
    return 0;
}