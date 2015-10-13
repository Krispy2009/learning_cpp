#include <iostream>
#include <vector>

int main()
{
    int number;
    std::vector<int> v1;
    
    while(std::cin >> number){
        v1.push_back(number);
    }
    
    std::cout << "Sums of adjacent numbers" << std::endl;
    for(int i=0; i < v1.size(); i=i+2){
        std::cout << v1[i]+ v1[i+1] << ' ';
    }
    std::cout << std::endl;
    std::cout << "Sums of the outer most elements going in" <<std::endl;
    for(int i=0; i < (v1.size()+1)/2; i++)
    {
        std::cout << v1[i] + v1[v1.size()-1-i] << ' ';
    }
    std::cout << std::endl;
    
    return 0;
}