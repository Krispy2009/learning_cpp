#include <vector>
#include <string>
#include <iostream>
using std::vector;
using std::string;
int main()
{
    //(a) legal for the new standard. A vector of int vectors.
    vector<vector<int>> ivec;
    
    //(b) illegal. vectors are of different types. svec is a vector that holds strings,
    // ivec is a vector that holds int vectors.
    //vector<string> svec = ivec;
    
    //legal. svec is a string vector that has 10 "null" strings in it.
    vector<string> svec(10, "null");
    for(int i=0; i < svec.size(); i++)
    {
        std::cout << i << ": "<< svec[i] << std::endl;
    }
    return 0; 
}