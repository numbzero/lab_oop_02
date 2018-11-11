#include "lab_oop_02.h"

void	Continent::Init(void)
{
	std::cout << "\n[*] Init method.\n\n";
	std::cout << "\tName: ";
	std::cin >> name;
	std::cout << "\tHemisphere: ";
	std::cin >> hemisphere;
	std::cout << "\tSurface: ";
	std::cin >> surface;
	std::cout << "\tPopulation: ";
	std::cin >> population;
	std::cin.get();
}

void	Show(Continent obj)
{
	std::cout << "\n[*] Friend Show method.\n\n";
	std::cout << "\tName - " << obj.name << std::endl;
	std::cout << "\tHemisphere - " << obj.hemisphere << std::endl;
	std::cout << "\tSurface - " << obj.surface << " km^2\n";
	std::cout << "\tPopulation - " << obj.population << std::endl;
}