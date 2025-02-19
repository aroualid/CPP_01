#include "Zombie.hpp"

Zombie::Zombie (void)
{
	std::cout << "Zombie " << name << " Constructor called" << std::endl;
}

Zombie::~Zombie (void)
{
	std::cout << "Zombie " << name << " Destructor called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName (std::string name)
{
	this->name = name;
}
