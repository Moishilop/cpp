#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon( std::string type );
		~Weapon();
		const std::string &getType(void);	
		void setType( const std::string &type );
};

#endif