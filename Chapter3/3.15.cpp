#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main()
{
    string in;
    vector<string> v1;
    
    while(std::cin >> in)
    {
        std::cout << "Adding " << in << " in our vector!\n";
        v1.push_back(in);
    }
    
    std::cout << "Our vector contains:\n";
    for(int i=0; i < v1.size(); i++)
    {
        std::cout << v1[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}