#include <iostream>

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, sCnt = 0;
    //char ch;
    
    std::string str= "";
    
    while(std::getline(std::cin, str))
    {
       
        for(auto ch : str){
        
        
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
                case '\n':
                case '\t':
                case ' ':
                    ++sCnt;
                break;
            }
            }
    }
    
    std::cout << "a: " << aCnt << std::endl;
    std::cout << "e: " << eCnt << std::endl;
    std::cout << "i: " << iCnt << std::endl;
    std::cout << "o: " << oCnt << std::endl;
    std::cout << "u: " << uCnt << std::endl;
    std::cout << "spaces: " << sCnt << std::endl;
    
}