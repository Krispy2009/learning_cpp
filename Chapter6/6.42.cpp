#include <iostream>
using namespace std;

string make_plural(size_t ctr, const string &word,
				 const string &end="s")
{
	return (ctr > 1) ? word + end :word;
}

int main()
{
	std::cout << make_plural(1,"success","es") << std::endl;
	std::cout << make_plural(2,"success","es") << std::endl;
	std::cout << make_plural(1,"failure") << std::endl;
	std::cout << make_plural(5,"failure") << std::endl;
}
