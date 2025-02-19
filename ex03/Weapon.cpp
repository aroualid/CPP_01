#include "Weapon.hpp"

Weapon::Weapon(std::string type)  : type(type)
{
	std::cout << "Weapon " << type << " Constructor called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor called" << std::endl;
}

const std::string& Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

