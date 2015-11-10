int calc(int& a, int& b){ return 1;}

int calc(const int& a, const int& b){ return 1;}


int calc(char* a, char* b){ return 1; }
int calc(const char* a, const char* b) { return 1; }


// Following two are wrong because char* an char* const are the same thing. 
int calc2(char* a, char* b) { return 1;}
int calc2(char * const a, char* const b) { return 1;}


int main(){
    return 0;
}