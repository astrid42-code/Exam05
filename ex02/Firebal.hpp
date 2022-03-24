#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <iostream>
# include "Aspell.hpp"

class ASpell;

class Fireball : public ASpell{
	public:
		Fireball() : ASpell("Fireball", "burnt to a crisp"){
		}

		~Fireball(){
		}
		Fireball(const Fireball & fw_cp){
			_name = fw_cp._name;
			_effects = fw_cp._effects;
		}
		Fireball	& operator=(const Fireball & fw_op){
			_name = fw_op._name;
			_effects = fw_op._effects;
			return (*this);
		}

		ASpell *clone() const{
			return (new Fireball(*this)); // doit retourner un ptr sur Fireball 
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