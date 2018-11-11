#ifndef	LAB_OOP_02_H
# define LAB_OOP_02_H

# include <iostream>
# include <cstdlib>
# include <string>

class Continent
{

	private:
		std::string			name;
		std::string			hemisphere;
		unsigned long		surface;
		unsigned long		population;

	public:
		Continent();										// Default constructor
		Continent(Continent &cpy);							// Copy constructor
		Continent(std::string nm, std::string hmsphr,
			unsigned long srfc, unsigned long ppltn);		// Parameterized constructor
		void		Init(void);
		void		ShowMethod(void);						// Test Show method
		friend void	Show(Continent obj);					// Friend method
		~Continent();										// Default destructor
};

#endif