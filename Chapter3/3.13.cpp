#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;

int main()
{
    //(a) emtpy.
    vector<int> v1;
    
    //(b) 10 elements. Elements have value 0 - default initialization.
    vector<int> v2(10);
    
    //(c) 10 elements. Elements have value 42;
    vector<int> v3(10,42);
    
    //(d) 10 elements. Elements have value 0 - default initialization.
    vector<int> v4{10};
    
    //(e) 2 elements. Elements have value 10 and 42 - List initialization.
    vector<int> v5{10, 42};
    
    //(f) 10 elements. Elements are emtpy strings - default initialization.
    vector<string> v6{10};
    
    //(g) 10 elements. Elements are "hi" strings.
    vector<string> v7{10, "hi"};
    
    return 0;
}