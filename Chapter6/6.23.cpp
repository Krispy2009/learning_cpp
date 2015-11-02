#include <iostream>

void print1(int* i, int *j)
{
    std::cout << "i: " << *i <<std::endl;
    std::cout << "j:";
    
    while(j && *j)  
    {  
        std::cout  << " " << *j++;
    }
}


void print2(const int *beg, const int *end)
{
    while(beg != end)
    {
        std::cout << *beg++ <<std::endl;
    }
}

void print3(int* j, std::size_t size)
{
    for(int i=0; i != size; i++)
    {
        std::cout << j[i] <<std::endl;
    }
}

int main()
{
    
    int i=0;
    int j[2] = {0,1};
    
    std::cout << "----print1----" <<std::endl;
    print1(&i, j);
    
    std::cout << "----print2----" <<std::endl;
    print2(std::begin(j), std::end(j));
   
    std::cout << "----print3----" <<std::endl;
    print3(j, sizeof(j)/sizeof(*j));
}