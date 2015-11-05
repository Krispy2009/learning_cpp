#include <iostream>


int &get(int *arry, int index) { return arry[index]; }

int main()
{
    int ia[10];
    for (int i=0; i !=10; ++i)
    {
        get(ia,i) = i;
        std::cout << ia[i] << std::endl;
    }
}

// Function looks ok!
// it goes through the array and puts the value of i in the i index.

//Does this by returning ia[i] at every iteration of the loop and assigining i to it. 