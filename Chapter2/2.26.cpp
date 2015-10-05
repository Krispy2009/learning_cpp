int main()
{
    //(a) invalid - we must initialize buf with a value
    const int buf;
    //(b) valid
    int cnt=0;
    //(c) valid
    const int sz = cnt;
    //(d) trying to change const variable sz. Big no no.
    ++cnt; ++sz;
    
    return 0;
}