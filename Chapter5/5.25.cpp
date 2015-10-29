#include <iostream>
#include <stdexcept>
int main()
{
	int a,b;

	while(std::cin >> a >> b)
	{

		try 
		{
			if(b == 0)
			{
				throw std::logic_error("Zero division :(");
			}		
		
			std::cout << a/b << std::endl;
		}
		catch(std::logic_error err)
		{
			std::cout << err.what() << std::endl;
			std::cout << "Please try again" << std::endl;
	
		} 
	}

	return 0;
}
