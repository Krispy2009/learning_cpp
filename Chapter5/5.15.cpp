#include <iostream>
int main()
{

	int sz = 2;
	/*
		(a)
		for(int ix = 0; ix != sz; ++ix) {...}
		if(ix != sz) {...}

		ix is not accessible outside the for loop so the if statement will fail
		to compile;
		Correct:
	*/

		for(int ix = 0; ix != sz; ++ix) {

			if(ix != sz) {/* ... */}
		}


	/*
		(b)
		int ix;
		for(ix!=sz; ++ix) { ...}

		The for header needs 3 statements. an initializer, a condition and
		an expression. This ommits the initializer. if we want to ommit it,
		we must enter a null statement.

		Three correct versions below:
	*/
		int ix = 0;
		for(; ix!=sz; ++ix) { /* ... */ }

		int ix2;
		for(ix2 = 0; ix!=sz; ++ix) { /* ... */ }

		for(int ix = 0; ix!=sz; ++ix){ /* ... */ }



	/*
		(c)

		for(int ix=0; ix!= sz; ++ix, ++ sz) {...}

		This loop will probably never terminate(if both values of the condition
		are incremented, without one of them changing in the loop).
		The problem with this is either that, or the fact that sz has not been
		initialized to anything (assuming it hasn't been initialized before this loop)

		A correction would be:

	*/

		for (int ix=0, sz=5; ix != sz; ++ix,++sz);

}
