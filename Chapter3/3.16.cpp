#include <iostream>
#include <vector>

using namespace std;
    int main()
    {
  //(a) emtpy.
    vector<int> v1;
    cout << v1.size() << endl;
    
    //(b) 10 elements. Elements have value 0 - default initialization.
    vector<int> v2(10);
    cout << v2.size() <<endl;
    for(int i: v2)
    {
        cout << i << ' ';
    }
    cout << endl;
    
    //(c) 10 elements. Elements have value 42;
    vector<int> v3(10,42);
    cout << v3.size() <<endl;
    for(int i: v3)
    {
        cout << i << ' ';
    }
    cout << endl;
    
    //(d) 1 element. Element has value 10.
    vector<int> v4{10};
    cout << v4.size() <<endl;
    for(int i: v4)
    {
        cout << i << ' ';
    }
    cout << endl;
    //(e) 2 elements. Elements have value 10 and 42 - List initialization.
    vector<int> v5{10, 42};
    cout << v5.size() <<endl;
    for(int i: v5)
    {
        cout << i << ' ';
    }
    cout << endl;
    
    //(f) 10 elements. Elements are emtpy strings - default initialization.
    vector<string> v6{10};
    cout << v6.size() <<endl;
    for(std::string i: v6)
    {
        cout << i << ' ';
    }
    cout << endl;
    
    //(g) 10 elements. Elements are "hi" strings.
    vector<string> v7{10, "hi"};
    cout << v7.size() <<endl;
    for(std::string i: v7)
    {
        cout << i << ' ';
    }
    cout << endl;
    
    return 0;
    }