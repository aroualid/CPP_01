#include "Harl.hpp"

Harl::Harl()
{
	comp[0].level = "DEBUG";
	comp[1].level = "INFO";
	comp[2].level = "WARNING";
	comp[3].level = "ERROR";
	comp[0].complain = &Harl::debug;
	comp[1].complain = &Harl::info;
	comp[2].complain = &Harl::warning;
	comp[3].complain = &Harl::error;
	std::cout << "Harl Constructor called \n";
}

Harl::~Harl()
{
	std::cout << "Harl Destructor called \n";
}


void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (comp[i].level == level)
		{
			(this->*comp[i].complain)();
			return ;
		}
	}
	std::cout << "No matching level \n";
}


void Harl::debug()
{
	std::cout << "DEBUG \n" << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info()
{
	std::cout << "INFO \n" << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning()
{
	std::cout << "WARNING \n" << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error()
{
	std::cout << "ERROR \n" << "This is unacceptable! I want to speak to the manager now.\n";
}
