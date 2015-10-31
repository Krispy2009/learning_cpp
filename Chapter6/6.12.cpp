#include <iostream>

int swap(int &p, int &q)
{
    int tmp = p;
    p = q;
    q = tmp;
    
    return 0;
}


int main()
{
    int a = 10, b=20;
    std::cout << "a is " << a <<" and b is " <<  b << std::endl;
    std::cout << "Swapping!" << std::endl;
    
    swap(a,b);
    
    std::cout << "now a is " << a <<" and b is " << b << std::endl;
    
    
}