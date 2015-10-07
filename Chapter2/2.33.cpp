int main()
{
    int i = 0, &r=i;
    auto a = r;
    
    // a = 42 is ok because a is an int.
    
    const int ci = i, &cr = ci;
    auto b = ci;
    
    //b = 42: is ok because b is an int (const is dropped)
    
    auto c = cr;
    
    //c = 42 is ok because c is an int (const is dropped)
    // cr is a reference to const int so const is dropped when using auto
    
    auto d = &i;
    //d = 42 is not ok. d is a pointer so int *p = 42 does not really make sense.
    
    auto e = &ci;
    //e = 42 is not ok. e is a pointer to a constant int. 
    // setting it to 42 does not make sense
    
    auto &g = ci;
    //g = 42 is not ok. We cannot change const ints.
    
    
    return 0;
    
}