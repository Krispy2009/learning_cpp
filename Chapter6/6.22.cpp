#include <iostream>

int swap(int *p, int *q)
{
    int tmp = *p;
    *p = *q;
    *q = tmp;
    return 0;
}


int main(){
    
    int a =29, b=203;
    int *p = &a, *q = &b;
    
    std::cout << "p holds " << *p << " and q holds " << *q <<std::endl;
    swap(p, q);
    std::cout << "p holds " << *p << " and q holds " << *q <<std::endl;
    
}


