#include <string>

struct Person
{
	std::string name;
	std::string address;


	/*
		using const after the function name means that this function is not
		allowed to change any class members (name and adress) so these two
		function should have const added. They are functions that are intended
		to only read the name and addres, not change it.
	*/

	std::string get_name() const { return name;}
	std::string get_address() const { return address;}

};
