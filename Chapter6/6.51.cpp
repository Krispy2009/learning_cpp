#include <iostream>


void f()
{
    std::cout << "First f: no args!" << std::endl;
}

void f(int a)
{
    std::cout << "Second f. One int arg" << std::endl;
}

void f(int a, int b)
{
    std::cout << "Third f. Two int args" << std::endl;
}

void f(double a, double b = 3.14)
{
    std::cout << "fourth f. Two double args" << std::endl;
}

int main(){
    f(2.56, 42); // ambigous call
    f(42); // Second f
    f(42,0); // third f
    f(2.56, 3.14); // Fourth f
}