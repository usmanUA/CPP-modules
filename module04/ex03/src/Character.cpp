
#include "../include/Character.hpp"

Character::Character(void) : ICharacter()
{
	this->name = "deault";
};

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
};

Character::Character(std::string name) : name(name)
{
};

Character::Character(const Character& from)
{
	for (int i = 0; i < 4; i++)
	{
		if (from.inventory[i] != NULL)
			this->inventory[i] = from.inventory[i]->clone();
	}
};

Character&	Character::operator=(const Character& from)
{
	if (this != &from)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (from.inventory[i] != NULL)
				this->inventory[i] = from.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
	}
	return *this;
}

std::string const & Character::getName( void ) const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	if (m == NULL)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip( int idx )
{
	if (idx > 3 || idx < 0)
		return;
	if (this->inventory[idx] == NULL)
		return;
	this->inventory[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target )
{
	if (idx > 3 || idx < 0)
		return;
	if (this->inventory[idx] == NULL)
		return;
	this->inventory[idx]->use(target);
}
