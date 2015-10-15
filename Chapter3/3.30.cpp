#include <iostream>
#include <cstddef>

int main()
{
    constexpr size_t array_size = 10;
    int ia[array_size];
        
    //The ix <= array_size will try to access ia[10] at the last iteration, which is out
    // of the array bounds. the array has 10 things inside (i.e up to index 9).
    //To fix, just change <= to <
    for (size_t ix=1; ix < array_size; ++ix)
    {
        ia[ix] = ix;
        
    }
}