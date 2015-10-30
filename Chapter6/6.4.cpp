#include <iostream>


int fact()
{
	int in;

	std::cout <<  "Enter a number!" << std::endl;
	std::cin >> in;

	int result = 1;
	while(in > 1)
	{
		result *= in--;
	}
	std::cout << result << std::endl;
}


int main()
{
	fact();
}
