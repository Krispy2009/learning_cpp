//Corrected programs for 5.13

int main()
{
    //(a) - break was missing after the cases. 
    unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch(ch){
        case 'a': aCnt++; break;
        case 'e': eCnt++; break;
        default: iouCnt++;
    }
    
    //(b) - needs curly braces when declaring variables;
    unsigned index = some_value();
    switch(index) {
        case 1:
            {
                int ix = get_value();
                ivec[ix] = index;
                break;
            }
        default:
            {
                int ix = ivec.size()-1;
                ivec[ix] = index;
            }
    }
    
    
    //(c) - cannot comma separate cases.
    unsigned evenCnt =0, oddCnt=0;
    int digit = get_num() %10;
    switch(digit){
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            oddCnt++;
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            evenCnt++;
            break;
        
    } 
    
    
    //(d) - case labels must be constexprs. we cannot have variables as labels

     unsigned ival = 512, jval=1024, kval=4096;
     unsigned bufsize;
     unsigned swt = 512;
     switch(swt) {
         case 512:
            bufsize = ival * sizeof(int);
            break;
         case 1024:
            bufsize = jval * sizeof(int);
            break;
         case 4096:
            bufsize = kval * sizeof(int);
            break;
     }
 }