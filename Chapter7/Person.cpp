#include "Person.h"
#include <iostream>

std::ostream &print(std::ostream &os, const Person &person)
{
	os << person.get_name() << " " << person.get_address();
	return os;
}

std::istream &read(std::istream &is, Person &person)
{
	is >> person.name >> person.address;
	return is;
}

