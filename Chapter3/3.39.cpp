#include <iostream>
#include <string>

int main(){
    std::string s1 = "hello";
    std::string s2 = "hello";
    
    if(s1 == s2)
    {
        std::cout << "Strings are the same" << std::endl;
    }
    else
    {
        std::cout << "Strings are not the same" <<std::endl;
    }
    
    //C-style character strings
    
    char ca1[] = {'h','e','l','l','o','\0'};
    char ca2[] = {'h','e','l','l','O','\0'};
    
    if(std::strcmp(ca1, ca2) ==0)
    {
        
        std::cout << "Strings are the same" << std::endl;
    }
    else
    {   
        std::cout << "Strings are not the same" <<std::endl;
    }
    
    return 0; 
}