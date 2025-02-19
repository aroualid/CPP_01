#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA (std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
	std::cout << "HumanA " << name << " Constructor called" << std::endl;
}

HumanA::~HumanA (void)
{
	std::cout << "HumanA Destructor called" << std::endl;
}

std::string HumanA::getName(void)
{
	return (name);
}

void HumanA::attack(void)
{
	std::cout << getName() << " attacks with their " << weapon.getType() << "\n";
}
