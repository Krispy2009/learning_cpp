#include <iostream>

int main(){
    
    char ch;
    int aCount,eCount, iCount, oCount, uCount;
    aCount = eCount = iCount = oCount = uCount = 0;
    
    
    while (std::cin >> ch)
    {
        if(ch == 'a')
        {
            ++aCount;
        }
        if(ch == 'e')
        {
            ++eCount;
        }
        if(ch == 'i')
        {
            ++iCount;
        }
        if(ch == 'o')
        {
            ++oCount;
        }
        if(ch == 'u')
        {
            ++uCount;
        }
        
    }
    
    std::cout << "a: " << aCount << std::endl;
    std::cout << "e: " << eCount << std::endl;
    std::cout << "i: " << iCount << std::endl;
    std::cout << "o: " << oCount << std::endl;
    std::cout << "u: " << uCount << std::endl;
    
}