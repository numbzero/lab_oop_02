#include "lab_oop_02.h"

void	Continent::Init(void)
{
	std::cout << CYAN "\n[*] [method] " RESET " Init.\n\n";
	std::cout << "\tName: ";
	std::cin >> name;
	std::cout << "\tHemisphere: ";
	std::cin >> hemisphere;
	std::cout << "\tSurface: ";
	std::cin >> surface;
	std::cout << "\tPopulation: ";
	std::cin >> population;
	std::cin.get();
#if DEBUG
	sleep(1);
#endif
}

void	Show(Continent obj)
{
	std::cout << MAGENTA "\n[*] [friend_method] " RESET " Show.\n\n";
	std::cout << "\tName - " << obj.name << std::endl;
	std::cout << "\tHemisphere - " << obj.hemisphere << std::endl;
	std::cout << "\tSurface - " << obj.surface << " km^2\n";
	std::cout << "\tPopulation - " << obj.population << std::endl;
#if DEBUG
	sleep(1);
#endif
}

void	Continent::ShowMethod(void)
{
	std::cout << CYAN "\n[*] [method] " RESET " Show.\n\n";
	std::cout << "\tName - " << name << std::endl;
	std::cout << "\tHemisphere - " << hemisphere << std::endl;
	std::cout << "\tSurface - " << surface << " km^2\n";
	std::cout << "\tPopulation - " << population << std::endl;	
#if DEBUG
	sleep(1);
#endif
}
