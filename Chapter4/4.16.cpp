#include <iostream>

int main()
{
    /*
        if(p = getPtr() != 0)
        
        this will first check if getPtr() != 0. Depening on what getPtr() returns
        we then assign 0 or 1 (false or true) to p. If the value we assign to p is 1 
        the if condition evaluates to true, if not, it evaluates to false.
        This expression should be rewritten as:
        
        if((p = getPtr()) != 0)
        
        which means that if the value of p (which is set to what getPtr() returns ) 
        is not equal to 0 then this if evaluates to true.
    /*
    
    /*
        if (i=1024)
        
        this will assign the value 1024 to i and then return that value, which will 
        cause the if clause to evaluate to true (any non zero value is true).
        However this is probably not what was intended, because we are changing the 
        value of i to 1024.
        This expression can be rewritten as:
        
        if(i == 1024)
        
        to only check if i is equal to 1024, without changing its value.
    */
}