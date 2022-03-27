#ifndef POLYMORPH_HPP
#define POLYMORPH_HPP

#include <iostream>

# include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell{
	public:
		Polymorph() : ASpell("Polymorph", "turned into a critter"){
		}

		~Polymorph(){
		}
		Polymorph(const Polymorph & fw_cp){
			_name = fw_cp._name;
			_effects = fw_cp._effects;
		}
		Polymorph	& operator=(const Polymorph & fw_op){
			_name = fw_op._name;
			_effects = fw_op._effects;
			return (*this);
		}

		ASpell *clone() const{
			return (new Polymorph(*this)); // doit retourner un ptr sur Polymorph 
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