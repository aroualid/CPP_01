#include "file.hpp"

int main(int argc, char **av)
{
	if (argc == 4)
	{
		std::ifstream ifs(av[1]);
		if (!ifs)
		{
			std::cout << "error wrong file \n";
			return -1 ;
		}
		std::string line;
		std::getline(ifs, line, '\0');
		std::string secondfile(av[1]);
		secondfile  += ".replace";
		fillSecondFile(line, av[2], av[3], secondfile);
	}
	else
		std::cout << "Wrong Number of arg \n";
}
