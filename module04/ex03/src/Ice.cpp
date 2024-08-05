
# include "../include/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
};

Ice::~Ice(void)
{
};

Ice::Ice(const Ice& from) : AMateria(from)
{
};

Ice&	Ice::operator=(const Ice& from)
{
	AMateria::operator=(from);
	if (this != &from)
		*this = from;
	return *this;
};

AMateria*	Ice::clone() const
{
	return new Ice();
};

void	Ice::use(ICharacter& character)
{
	std::cout << "* shoots an ice bolt at " << character.getName() << " *" << std::endl;
};
