#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack (void);
		std::string getName(void);
	private:
		Weapon &weapon;
		std::string name;
};

#endif 
