#include <iostream>
#include <vector>

int main()
{
    int ival = 2;
    int *ptr = &ival;
    std::vector<int> vec = {0,1,2,3,4,5,6,7};

    //(a) ptr != 0 && *ptr++)
    //Checks if ptr is a null pointer, if not, it increments the pointer 
    // but dereferences the initial (unincremented) value.


    // will print 1 because the left hand side is true, 
    // and the right hand side returns a non 0 value; 
    std::cout << (ptr!=0 && *ptr++) <<std::endl;
    
    
    
    //(b) ival++ && ival
    // This will invrement ival and use the unincremented value on the left 
    // and incremented value on the right to do the logical AND.
    std::cout << ival  << " and " << ival+1 << " is " << (ival++ && ival ) <<std::endl;
    
    
    //(c) vec[ival++] <= vec[ival]
    //These will always point to the next element because ival++ increments the value
    //but yields the unincremented value so the left hand side will be val[3] <= val[4]
    std::cout <<"idx: " << ival  << " for value: "<< vec[ival++] << " and " 
        << " idx: " << ival << " for value: " << vec[ival] <<std::endl; 
}