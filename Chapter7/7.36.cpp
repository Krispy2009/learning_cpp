struct X
    //base needs to appear first because  the initialization of rem uses base.
    int base, rem;  
  
  X(int i, int j): base(i), rem(base%j) {}
};

int main(){}