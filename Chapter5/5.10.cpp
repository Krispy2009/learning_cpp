#include <iostream>

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    while(std::cin >> ch )
    {
        //Could be done like this!
        //ch = tolower(ch)
        
        switch(ch)
        {
            case 'A':
            case 'a':
                ++aCnt;
                break;
            case 'E':
            case 'e':
                ++eCnt;
                break;
            case 'I':
            case 'i':
                ++iCnt;
                break;
            case 'O':
            case 'o':
                ++oCnt;
                break;
            case 'U':
            case 'u':
                ++uCnt;
                break;

        }
    }
    
    std::cout << "a: " << aCnt << std::endl;
    std::cout << "e: " << eCnt << std::endl;
    std::cout << "i: " << iCnt << std::endl;
    std::cout << "o: " << oCnt << std::endl;
    std::cout << "u: " << uCnt << std::endl;
    
}