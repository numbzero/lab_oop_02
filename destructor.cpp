#include "lab_oop_02.h"

Continent::~Continent(void)
{

#if DEBUG
	std::cout << RED "\n[+] [default_destructor] " RESET "Object is being deleted!\n";
	sleep(1);
#endif

}