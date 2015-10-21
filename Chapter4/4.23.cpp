#include <iostream>

int main()
{
    std::string s = "word";
    
    
    //This is trying to do: pl = (s+s[s.size()-1]) == 's' ) ? "" : "s");
    //so it is trying to compare a string with a char (which is an int).
    //std::string pl = s + s[s.size() -1] == 's' ? "" : "s";
    
    //What it is trying to do, is pluralise a word. so a correct way to do it is
    std::string pl = (s[s.size()-1] == 's') ? s : s + "s";

    std::cout << pl << std::endl;
    
    return 0;
}