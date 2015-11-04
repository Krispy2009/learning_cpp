#include <iostream>
#include <initializer_list>


int sum(std::initializer_list<int> il){


	int sum = 0;

	for(auto beg = il.begin(); beg != il.end(); ++beg)
	{
		sum+=*beg;
	}

	return sum;
}



int main()
{
	std::initializer_list<int> il = {1,2,3,4,5,100};
	std::cout << sum(il) << std::endl;
}
