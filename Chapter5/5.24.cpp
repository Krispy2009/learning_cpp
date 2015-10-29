#include <iostream>
#include <stdexcept>
int main()
{
	int a,b;

	std::cin >> a >> b;

	if(b == 0)
	{
		throw std::logic_error("Zero division :(");
	}

	std::cout << a/b << std::endl;
	return 0;
}
