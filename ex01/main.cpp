#include "Zombie.hpp"

int main (void)
{
	int i;

	i = 4;
	Zombie* michels = zombieHorde(i, "michel");
	for (int j = 0; j < i; j++)
		michels->announce();
	delete[] (michels);
}
