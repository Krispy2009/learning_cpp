#include <iostream>

int main(){
	std::string str, prev_str;

	while(std::cin >> str && str != "end")
	{
		if(str == prev_str)
		{
			if(isupper(str[0])){
			std::cout << str << " was repeated!" <<std::endl;
			break;
			}
			else
			{
				continue;
			}
		}
		else
		{
			prev_str = str;
		}
	}

	if(str[0] != prev_str[0] && str != prev_str)
	{
		std::cout << "There were no repeated words" << std::endl;
	}

	return 0;
}
