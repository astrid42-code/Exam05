#ifndef FWOOSH_HPP
#define FWOOSH_HPP

# include <iostream>
# include "Aspell.hpp"

class Fwoosh : public ASpell{
	public:
		Fwoosh() :  _name("Fwoosh"), _effects("fwooshed"){} // ASpell(_name, _effects),
		~Fwoosh(){}

		ASpell *clone() const{
			return (new Fwoosh(*this)); // doit retourner un ptr sur Fwoosh (donc this?)
		}

	private:
		std::string _name;
		std::string _effects;
		Fwoosh(const Fwoosh & fw_cp);
		Fwoosh	& operator=(const Fwoosh & fw_op);

};

#endif