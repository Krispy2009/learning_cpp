#include "Person.h"
#include <iostream>

int main(){
	Person kostas;

	std::cin >> kostas.name >> kostas.address;

	std::cout << "Your name: " << kostas.get_name() << std::endl;
	std::cout << "Your address: " << kostas.get_address() << std::endl;

	return 0;

}
