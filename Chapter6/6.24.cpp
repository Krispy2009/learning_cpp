#include <iostream>


void print(const int ia[10])
{
    for(std::size_t i=0; i != 10; ++i)
    {
        std::cout << ia[i] << std::endl;
    }
}

int main(){
    
    int ia[10]= {2,3,4,5,6,5,4,3,2,1};
    
    print(ia);
    
}

/*
    This function can only print integer arrays of size 10.
    
*/