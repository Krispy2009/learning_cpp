#include <iostream>

int main(int argc, char **argv)
{
	std::string res;
	if(argc !=3)
	{

		std::cout << "This function takes 2 args!" <<std::endl;
		return -1;

	}
	else
	{
		for(int i=1; i< argc; i++)
		{
			res+=argv[i];
		}

		std::cout << res <<std::endl;
		return 0;

	}
}
