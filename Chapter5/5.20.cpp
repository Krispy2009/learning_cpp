#include <iostream>

int main(){
	std::string str, prev_str;

	while(std::cin >> str && str != "end")
	{
		if(str == prev_str)
		{
			std::cout << str << " was repeated!" <<std::endl;
			break;
		}
		else
		{
			prev_str = str;
		}
	}

	if(str != prev_str)
	{
		std::cout << "There were no repeated words" << std::endl;
	}

	return 0;
}
