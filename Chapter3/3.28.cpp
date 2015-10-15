#include <iostream>
#include <string>

// 10 empty strings - default initialization.
std::string sa[10];

// 10 zeroes - default initialization.
int ia[10];

int main()
{
    std::cout << sa[0] << " and " <<sa[1] <<std::endl;
    std::cout << ia[0] << ia[1] << ia[6]<< std::endl;
    
    //10 empty strings 
    std::string sa2[10];
    std::cout << sa2[0] << "and"<<sa2[1] <<std::endl;
    
    // 10 zeroes
    int ia2[10];
    
    std::cout << ia2[0] << ia2[1] <<std::endl;
    
    return 0;
}