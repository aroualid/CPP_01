#include "HumanB.hpp"

HumanB::HumanB (std::string name) : name(name)
{
	std::cout << "HumanB " << name << " Constructor called" << std::endl;
}

HumanB::~HumanB (void)
{
	std::cout << "HumanB Destructor called" << std::endl;
}

std::string HumanB::getName(void)
{
	return (name);
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon; 
}

void HumanB::attack(void)
{
	if (weapon == NULL)
		std::cout << getName() << " has no weapon";
	else
		std::cout << getName() << " attacks with their " << weapon->getType() << "\n";
}


