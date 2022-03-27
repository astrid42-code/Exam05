#ifndef FWOOSH_HPP
#define FWOOSH_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell{
	public:
		Fwoosh() : ASpell("Fwoosh", "fwooshed"){
		}

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
			return (new Fwoosh(*this)); // doit retourner un ptr sur Fwoosh 
		}
		
		std::string getName() const{
			return (_name);
		}

		std::string getEffects() const{
			return (_effects);
		}

		void	launch(const ATarget &atarget) const{
			atarget.getHitBySpell(*this); // doit recevoir en param un objet ASpell donc le pointeur this qui contient les donnees de l'objet ASpell
		}

	private:

};

#endif