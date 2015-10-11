#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello World!";
    //This will not change str because c is no longer a reference.
    for ( char c : str)
    {
        c = 'X';
    }
    std::cout << str <<std::endl;
    return 0;
}