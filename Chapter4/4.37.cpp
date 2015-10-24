#include <iostream>

int main()
{
    int i;
    double d;
    const std::string *ps;
    char *pc;
    void *pv;
    
    //(a) pv = (void*) ps
    pv = const_cast<std::string*>(ps);
    
    //(b) i = int(*pc)
    i = static_cast<int>(*pc);
    
    //(c) pv = &d
    pv = static_cast<void*>(&d);
    
    //(d) pc = (char*) pv
    pc = static_cast<char*>(pv);
    
    return 0; 

}