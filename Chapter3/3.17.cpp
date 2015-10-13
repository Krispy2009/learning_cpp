#include <iostream>
#include <vector>

int main()
{
    std::string word;
    std::vector<std::string> v1;
    
    while(std::cin >> word)
    {
        v1.push_back(word);
    }
    
    for(auto &c : v1)
    {
        for(auto &l: c)
        {
            l = toupper(l);
        }
    }
    
    for(int i=0; i < v1.size(); i++)
    {
        std::cout << v1[i] << ' ';
        
        if(i==7)
        {
            std::cout << std::endl;
        }
    }
    return 0;
}