#include <iostream>
#include <string>

using std::getline;
using std::cout;
using std::cin;
using std::string;

int line()
{
    string line;
    while(getline(cin, line))
    {
        cout << line;
    }
    return 0;
}

int word()
{
    string word;
    while(cin >> word)
    {
        cout << word;
    }
    return 0;
}

int main()
{
    //line();
    word();
}