#ifndef	LAB_OOP_02_H
# define LAB_OOP_02_H

# include <iostream>
# include <cstdlib>
# include <string>

# include <unistd.h>

# define DEBUG 1

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"

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