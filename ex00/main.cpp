#include "Zombie.hpp"

int main (void)
{
	Zombie* michel = newZombie("michel");
	michel->announce();
	randomChump("ari");
	randomChump("leonard");
	delete (michel);
}
