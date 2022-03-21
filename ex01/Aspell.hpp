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
		virtual ASpell *clone() = 0;
		void	launch(const ATarget &atarget){
			atarget.getHitBySpell(); // doit recevoir en param un objet ASpell
		}

	protected:
		std::string _name;
		std::string _effects;
	
	// private:// en private ou en protected?
		ASpell();
		ASpell(const ASpell & aspell_cp);
		ASpell &operator=(const ASpell &aspell_op);

};

#endif