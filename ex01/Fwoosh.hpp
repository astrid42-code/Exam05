#ifndef FWOOSH_HPP
#define FWOOSH_HPP

# include <iostream>
# include "Aspell.hpp"

class Fwoosh : public ASpell{
	public:
		Fwoosh() : ASpell(_name, _effects), _name("Fwoosh"), _effects("fwooshed"){}
		~Fwoosh(){}

		Fwoosh *clone(){
			// cloner quoi? 
			//return (*this); // doit retourner un ptr sur Fwoosh (donc this?)
		}

	private:
		std::string _name;
		std::string _effects;
		Fwoosh(const Fwoosh & fw_cp);
		Fwoosh	& operator=(const Fwoosh & fw_op);

};

#endif