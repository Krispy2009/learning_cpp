#include  <iostream>

int main()
{
    int ival = 42;
    int *p = &ival;
    int **pp = &p;
    
    
    std::cout << "The value of ival: " << ival << std::endl
              << "The pointer p is pointing to: " << *p 
              << " and has address " << p << std::endl
              << "The pointer pp is pointing to pointer p which is "<< **pp 
              << " and has address " << pp << std::endl;
        
    std::cout << "The direct value of ival: " << ival<< "\n"
              << "The indirect value: " << *p << "\n"
              << "The doubly indirect value: " << **pp << std::endl;
    return 0;         
}