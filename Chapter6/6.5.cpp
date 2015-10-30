#include <iostream>

int abs(int i){
	int result =0;
	if(i > 0)
	{
		result =  i -(2*i);
	}
	else
	{
		result = i + (-2*i);
	}

	std::cout << result << std::endl;
}


int main()
{
	abs(100);
	abs(-100);
	abs(-435);
	abs(0);
}
