#include <iostream>
#include <vector>

using std::vector;

int main()
{
    int in;
    vector<int> v1;
    
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
    
}