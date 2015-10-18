#include <iostream>
int main(){
int arr1[5] = {1,2,3,8,0};
int *p1 = arr1;
int *p2 = arr1;



for(int i=0; i <10; i++){
    std::cout <<*p1 << ", " << *p2<< std::endl;
    
    p1 += p2 - p1;
    std::cout << *p1 << std::endl;
    ++p1;
    
    }

}