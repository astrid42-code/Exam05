#ifndef FWOOSH_HPP
#define FWOOSH_HPP

# include <iostream>
# include "Aspell.hpp"

class ASpell;

class Fwoosh : public ASpell{
	public:
		Fwoosh() :  _name("Fwoosh"), _effects("fwooshed"){}
		~Fwoosh(){
		}
		Fwoosh(const Fwoosh & fw_cp){
			_name = fw_cp._name;
			_effects = fw_cp._effects;
		}
		Fwoosh	& operator=(const Fwoosh & fw_op){
			_name = fw_op._name;
			_effects = fw_op._effects;
			return (*this);
		}

		ASpell *clone() const{
			return (new Fwoosh(*this)); // doit retourner un ptr sur Fwoosh (donc this?)
			// PB ne retourne rien (ne prend pas en compte le name et les effects)
		}
		

	private:
		std::string _name;
		std::string _effects;

};

#endif