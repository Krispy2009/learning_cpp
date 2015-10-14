#include <iostream>
#include <vector>

int main()
{
    
    std::vector<std::string> text{"hello this is kristi", "hello andy, how are you?","These should become capital letters (incl last two sentences)", ""};
    
    text.push_back("This should stay small");
    text.push_back("geia sou");
    
    for(auto it = text.begin(); it != text.end() && !it->empty(); ++it )
    {
        for(auto it2 = it->begin(); it2 != it->end(); ++it2)
        {
          
            *it2 = toupper(*it2);
        
        } 
    }
    
    for(auto it = text.begin(); it != text.end(); ++it )
    {
        std::cout << *it << std::endl;
    }
    
    return 0;
}