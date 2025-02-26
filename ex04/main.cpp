#include "file.hpp"

int main(int argc, char **av)
{
	if (argc == 4)
	{
		std::ifstream ifs(av[1]);
		if (!ifs)
			std::cout << "error \n";
		std::string line;
		std::getline(ifs, line, '\0');
		std::cout << line << "\n";
		std::string secondfile(av[1]);
		secondfile  += ".replace";
		fillSecondFile(line, av[2], av[3], secondfile);
	}
}
