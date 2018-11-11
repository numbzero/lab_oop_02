#include "lab_oop_02.h"

// https://en.cppreference.com/w/cpp/language/initializer_list


Continent::Continent(void)
{
	// std::cout << "\n[+] [default_constructor] Object is being created!\n";
}

Continent::Continent(Continent &cpy) : name(cpy.name), hemisphere(cpy.hemisphere),
	surface(cpy.surface), population(cpy.population) 
{
	// std::cout << "\n[+] [copy_constructor] Data has been copied!\\Object is being created!\n";
}

Continent::Continent(std::string nm, std::string hmsphr, unsigned long srfc, unsigned long ppltn) :
	name(nm), hemisphere(hmsphr), surface(srfc), population(ppltn) 
{
	// std::cout << "\n[+] [parameterized_constructor] Object is being created.\n";
}