#include <iostream>
#include <vector>

int main()
{
    int number;
    std::vector<int> v1;



    while(std::cin >> number){
        v1.push_back(number);
    }

    std::cout << "Sums of adjacent numbers" << std::endl;
    for( auto start = v1.begin(); start < v1.end(); start = start+2)
	{
        std::cout << *start + *(start+1) << ' ';
    }
    std::cout << std::endl;
    std::cout << "Sums of the outer most elements going in" <<std::endl;

	auto end = v1.end();
    for( auto start = v1.begin(); start < end; start++)
    {
		if( start != end)
		{
			--end;
			std::cout << *start + *end << ' ';
		}
    }
    std::cout << std::endl;

    return 0;
}
