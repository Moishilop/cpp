#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &copy);
		Cure& operator=(const Cure& obj);
		virtual ~Cure();

		virtual AMateria *clone(void) const;
		virtual void use(ICharacter &target);
};

#endif