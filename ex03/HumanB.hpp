#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	public:
		HumanB(std::string name);
		~HumanB();
		void attack (void);
		void setWeapon(Weapon &weapon);
		std::string getName(void);
	private:
		Weapon *weapon;
		std::string name;
};

#endif
