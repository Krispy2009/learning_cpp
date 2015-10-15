int main()
{
    unsigned buf_size = 1024;
    //(a) invalid. buf_size is not a constexpr. 
    // We cannot initialize arrays with non const values
    int ia[buf_size];
    
    //(b) it is legal.
    int ia[4*7-14];
    
    //(c) illegal if text_size is not a constexpr
    int ia[txt_size()];
    
    //(d) illegal. Too many characters for the array size 
    // ( we need 1 extra char for the null char at the end)
    char st[11] = "fundamental";
    
    
}