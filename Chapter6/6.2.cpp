int main() 
{

/*
	(a) int f() {
			string s;
			return s;
		}

	this function needs to return an int, so return s is a problem!

	a way to fix this is either to change the type of the function to 

	string f() {..}
	so that it expects a string to be returned, or change s to be an int:

	int f() {
		int s;
		return s;
	}
*/

/*

	(b) f2(int i){..}  you can't initialize parameters when you are calling a function;

		a solution would be: 
			
			int i;
			f2(i) {...}
*/


/*
	(c)
	int calc(int v1, int v1)  }

	the opening bracket is missing, and parameter names cannot have the same name!
	correct:   int calc(int v1, int v2) {...}

*/

/*

	(d) double square(double x) return x * x;

	The function body needs brackets around it!

	correct: double square(double x) { return x * x;}
*/


}
