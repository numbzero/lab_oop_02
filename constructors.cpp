#include "lab_oop_02.h"

// https://en.cppreference.com/w/cpp/language/initializer_list


Continent::Continent(void)
{

#if DEBUG
	std::cout << GREEN "\n[+] [default_constructor]" RESET "Object is being created!\n";
	sleep(1);
#endif

}

Continent::Continent(Continent &cpy) : name(cpy.name), hemisphere(cpy.hemisphere),
	surface(cpy.surface), population(cpy.population) 
{

#if DEBUG
	std::cout << GREEN "\n[+] [copy_constructor]" RESET "Data has been copied!\\Object is being created!\n";
	sleep(1);
#endif

}

Continent::Continent(std::string nm, std::string hmsphr, unsigned long srfc, unsigned long ppltn) :
	name(nm), hemisphere(hmsphr), surface(srfc), population(ppltn) 
{

#if DEBUG
	std::cout << GREEN "\n[+] [parameterized_constructor] " RESET "Object is being created.\n";
	sleep(1);
#endif

}