#include <iostream>
int main(){
int arr1[] = {1,2,3,4,5,6,7,8,9};
int *p1 = arr1;
int *p2 = arr1+2;

    //this sets p1 to what p2 is set by taking the difference (of positions) between p2 and 
    // p1 and then adding it to p1. 
    // Given that p2 is legal (p1 and p2 are both legal because they point to elements in 
    // the same array) then p1 cannot be illegal.

    std::cout <<*p1 << ", " << *p2<< std::endl;
    std::cout << p1 - p2 << std::endl;
    std::cout << p2 - p1 << std::endl;
    p1 += p2 - p1;
    ++p1;

}