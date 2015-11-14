#ifndef PERSON_HEADER
#define PERSON_HEADER

#include <string>
#include <iostream>


struct Person
{
	std::string name;
	std::string address;

    Person() = default;
    Person(const std::string &name) : name(name), address("") {}
    Person(const std::string &address) : name(""), address(address) {}
    Person(const std::string &name, const std::string address) : name(name), address(address){}

	/*
		using const after the function name means that this function is not
		allowed to change any class members (name and adress) so these two
		function should have const added. They are functions that are intended
		to only read the name and addres, not change it.
	*/

	std::string get_name() const { return name;}
	std::string get_address() const { return address;}

};


std::ostream &print(std::ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}

std::istream &read(std::istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

#endif