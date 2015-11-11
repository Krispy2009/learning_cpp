#include <vector>
#include <iostream>

std::vector<int(*)(int,int)> v1;


int add(int a, int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int divide(int a, int b)
{
    return a/b;
}

int multiply(int a, int b)
{
    return a*b;
}


int main(){
    
    v1.push_back(&add); 
    v1.push_back(&subtract);
    v1.push_back(&divide);
    v1.push_back(&multiply);
    
    int a = 6, b =2;
    
    for(auto f: v1)
    {
        std::cout << f(a,b) << std::endl;
    }
    
    
}
