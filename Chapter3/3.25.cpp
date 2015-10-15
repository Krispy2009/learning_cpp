#include <iostream>
#include <vector>

int main()
{
	std::vector<unsigned> scores(11,0), grades;
	unsigned grade;
	while(std::cin >> grade)
	{
		if(grade<=100)
		{
			grades.push_back(grade);
		}
	}

	auto it =  grades.begin();

	while(it != grades.end())
	{
		int idx = *it/10;
		auto sc = scores.begin() + idx;
		++*sc;
		++it;
	}

	for(auto it2 = scores.begin(); it2 != scores.end(); it2++)
	{
		std::cout << *it2 << ' ';
	}

	std::cout << std::endl;
}
