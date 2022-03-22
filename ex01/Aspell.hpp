#ifndef ASPELL_HPP
#define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ASpell{
	public:
		ASpell(std::string name, std::string effects) : _name(name), _effects(effects){}
		virtual ~ASpell(){}

		std::string getName() const{
			return (_name);
		}
		std::string getEffects() const{
			return (_effects);
		}
		virtual ASpell *clone() const = 0;
		void	launch(const ATarget &atarget) const{
			atarget.getHitBySpell(*this); // doit recevoir en param un objet ASpell donc le pointeur this qui contient les donnees de l'objet ASpell
		}

	protected:
		std::string _name;
		std::string _effects;
	
	 private:// en private ou en protected?
		ASpell(){}
		ASpell(const ASpell & aspell_cp){
			_name = aspell_cp._name;
			_effects = aspell_cp._effects;
		}
		ASpell &operator=(const ASpell &aspell_op){
			_name = aspell_op._name;
			_effects = aspell_op._effects;
			return (*this);
		}

};

#endif