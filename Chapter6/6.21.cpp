#include <iostream>


int greatest(int i, int *ip)
{
    if(i > *ip){
        return i;
    }
    else
    {
        return *ip;
    }
}

int main()
{
    int i=100, o=25;
    int *ip = &o;
    
    std::cout << greatest(i, ip) << std::endl;
}

