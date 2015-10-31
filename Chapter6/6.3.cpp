#include <iostream>


int fact(int i)
{
	int result = 1;
	while(i > 1)
	{
		result *= i--;
	}
	std::cout << result << std::endl;
    return result;
}


/*int main()
{
	fact(10);
}
*/