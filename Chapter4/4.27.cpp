#include <iostream>

int main(){
    unsigned long ul1 = 3, ul2 = 7;
    
    //(a) 0011 (3)
    std::cout << (ul1&ul2) << std::endl;
    //(b) 0111 (7)
    std::cout << (ul1|ul2) << std::endl;
    ///(c) 1 (true)
    std::cout << (ul1&&ul2) << std::endl;
    //(d) 1 (true)
    std::cout << (ul1||ul2) << std::endl;
    
    return 0;
}