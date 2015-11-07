//(a) - this is illegal
	int calc(int, int);
	int calc(const int, const int);
/* 	top level const is ignored, so this is essentially redeclaring the 
	first calc function.
*/

/* (b) This is illegal.
	int get();
	double get();

	the two functions only differ by their return types.
	
*/

/* (c)  This is legal
	int *reset(int *);
	double *reset(double*);
 
	They reset is an overloaded function. If you give it a pointer to an integer, it returns a pointer to an integer, but if you give it a pointer to a double, it returns a pointer to a double.
*/
