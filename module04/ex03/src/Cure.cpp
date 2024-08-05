
# include "../include/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
};

Cure::~Cure(void)
{
};

Cure::Cure(const Cure& from) : AMateria(from)
{
};

Cure&	Cure::operator=(const Cure& from)
{
	AMateria::operator=(from);
	if (this != &from)
		*this = from;
	return *this;
};

AMateria*	Cure::clone() const
{
	return new Cure();
};

void	Cure::use(ICharacter& character)
{
	std::cout << "* heals " << character.getName() << "’s wounds *" << std::endl;
};
