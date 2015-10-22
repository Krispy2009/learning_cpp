#include <iostream>
#include <bitset>

int main()
{
    // -7296 or 1110010000000?
    std::cout << ('q')<< " - " << ~'q'<<" - "  << (~'q'<<6) <<std::endl;
    std::cout << (~'q'<<6) << std::endl;
    return 0;
}