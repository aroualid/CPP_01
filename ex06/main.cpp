#include "Harl.hpp"

int main (int argc, char **av)
{	
	if (argc != 2)
	{
		std::cout << "Wrong number of args \n";
		return 0;
	}
	Harl harl;
	harl.complain(av[1]);
}
