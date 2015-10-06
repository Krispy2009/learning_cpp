int main()
{
    //(a) invalid - &r needs a variable not integer
    int i = -1, &r = 0;
    
    //(b) valid - assuming i2 exists and is not constant
    int *const p2 = &i2;
    
    //(c) valid but stupid 
    const int i = -1, &r = 0;
    
    //(d) valid assuming i2 exists and is an int
    const int *const p3 = &i2;
    
    //(e) valid
    const int *p1 = &i2;
    
    //(f) invalid
    const in &const r2;
    
    //(g) valid
    const int i2 = i, &r = i;    
    return 0;
}