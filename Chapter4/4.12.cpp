#include <iostream>

int main()
{
    int i = 1, j =2, k =3;

    /*
        i!=j < k means that 
        
        if j < k then we check if i != 1
        if j > k then we check if  i != 0
        
        basically we are checking if i is equal to 1 or 0
        depending on which value (j or k) is bigger.
    */
    std::cout << (i != j < k) <<std::endl;
}