char *init(int ht, int wd=80, char bckgrnd=' ');

// (a) init() - This is illegal. The first argument is not defaulted, so
// we need to provide a value for it.

//(b) init(24,10); - This is legal. ht is given the value 20 and the default value for wd is overwritten and set to 10. 

// (c) init(14, '*'); This is legal but probably not what the programmer
// intended. The '*' character is implicitly coverted to an int and given as the value to the wd parameter. The programmer's intention what probably to use it for the bckgrnd parameter.
