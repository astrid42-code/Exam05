#ifndef ASPELL_HPP
#define ASPELL_HPP

# include <iostream>

class ASpell{
	public:
		ASpell(std::string name, std::string effects);
		virtual ~ASpell();

		std::string getName() const{
			return (_name);
		}
		std::string getEffects() const{
			return (_effects);
		}
		virtual ASpell *clone() = 0;

	private:
		std::string _name;
		std::string _effects;
		ASpell();
		ASpell(const ASpell & aspell_cp);
		ASpell &operator=(const ASpell &aspell_op);

};

#endif