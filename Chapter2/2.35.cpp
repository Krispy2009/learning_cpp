#include <iostream>
#include <typeinfo>

int main()
{
    const int i=42; //i is a constant int
    auto j = i;  // j is an int
    const auto &k = i; // k is a (const) reference to a const int
    auto *p = &i; // p is a pointer to a const int
    const auto j2 = i, &k2 = i; // j2 is a constant int. k2 is a (const) reference to a const int
    
    //RTTI - Run time type identification - Coolest thing yet
    std::cout << typeid(i).name() << std::endl;
    std::cout << typeid(j).name() << std::endl;
    std::cout << typeid(k).name() << std::endl;
    std::cout << typeid(p).name() << std::endl;
    std::cout << typeid(j2).name() << std::endl;
    std::cout << typeid(k2).name() << std::endl;
    
    
    
    return 0;

}