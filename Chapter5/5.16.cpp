#include <iostream>

int main()
{
	std::string instr;

	while(std::cin >> instr)
	{
		std::cout <<  instr <<std::endl;
	}


	for(int i=0; i< 10; i++)
	{
		std::cout << i << std::endl;
	}


	//Doing the same (almost!) things using the other loops.


	for(int j = 0; j < 10000; j++)
	{
		if(std::cin >> instr)
		{
			std::cout << instr << std::endl;
		}
		else
		{
			break;
		}
	}

	int i = 0;
	while(i< 10)
	{
		std::cout << i << std::endl;
		i++;
	}


return 0;
}
