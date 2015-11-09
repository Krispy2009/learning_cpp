//using typedef

typedef string arrS[10];
arrT &funct(int i); // func returns a reference to an array of 10 strings


//using decltype

string tenStrings[] = {"a","s","a","s","a","s","a","s","a","s"};

decltype(tenStrings) &arrS(int i);


//using trailing return

auto func(int i) -> string(&)[10]
