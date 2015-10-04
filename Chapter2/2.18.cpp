#include <iostream>

int main()
{
    int best_variable = 42;
    int *best_pointer = &best_variable;
    
    std::cout << *best_pointer  <<" is at " << best_pointer << std::endl;

    best_pointer = nullptr;
    /* WARNING! SEGFAULT AHEAD    
        std::cout << *best_pointer << " is at " << best_pointer << std::endl;
    */

    int second_best_variable = 23;
    best_pointer = &second_best_variable;
    
    std::cout << *best_pointer  <<" is at " << best_pointer << std::endl;
    
    
    *best_pointer = 56;
    // pointer points to same address
    std::cout << *best_pointer  <<" is at " << best_pointer << std::endl;
    
}