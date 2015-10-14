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
    
    for(auto it = v2.cbegin(); it != v2.cend(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
    
    //(c) 10 elements. Elements have value 42;
    vector<int> v3(10,42);
    cout << v3.size() <<endl;
    for(auto it = v3.cbegin(); it != v3.cend(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
    
    //(d) 1 element. Element has value 10.
    vector<int> v4{10};
    cout << v4.size() <<endl;
    for(auto it = v4.cbegin(); it != v4.cend(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
    //(e) 2 elements. Elements have value 10 and 42 - List initialization.
    vector<int> v5{10, 42};
    cout << v5.size() <<endl;
    for(auto it = v5.cbegin(); it != v5.cend(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
    
    //(f) 10 elements. Elements are emtpy strings - default initialization.
    vector<string> v6{10};
    cout << v6.size() <<endl;
    for(auto it = v6.cbegin(); it != v6.cend(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
    
    //(g) 10 elements. Elements are "hi" strings.
    vector<string> v7{10, "hi"};
    cout << v7.size() <<endl;
    for(auto it = v7.cbegin(); it != v7.cend(); ++it)
    {
        cout << *it << ' ';
    }
    cout << endl;
    
    return 0;
    }