#include <iostream>

int main()
{
    //(a) we need brackets for the do block.
    
    do {
        std::string v1, v2;
        std::cout << "Please enter two strings to compare: ";
        if(std::cin >> v1 >> v2)
        {
            
            if(v1.size() < v2.size()){
                std::cout << "First one is shorter!!" << std::endl;
            }
            else if(v2.size() < v1.size())
            {
                std::cout << "Second one is shorter!!" << std::endl;
                
            }
            else
            {
                std::cout << "They are both the same size" << std::endl;
            }
        }
        
    }
    while(std::cin);
    
}