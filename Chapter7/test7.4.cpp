#include "Person.h"
#include <iostream>

int main(){
    std::string name, address;
    std::cin >> name >> address;
    Person kostas(name,address);
    
	std::cout << "Your name: " << kostas.get_name() << std::endl;
	std::cout << "Your address: " << kostas.get_address() << std::endl;

	return 0;

}
