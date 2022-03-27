#ifndef ASPELL_HPP
#define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell{
	public:
		ASpell();
		ASpell(std::string name, std::string effects);
		ASpell(const ASpell & aspell_cp);
		ASpell &operator=(const ASpell &aspell_op);
		virtual ~ASpell();

		virtual std::string getName() const;
		virtual std::string getEffects() const;
		virtual ASpell *clone() const = 0;
		void	launch(const ATarget &atarget) const;

	protected:
		std::string _name;
		std::string _effects;
};

#endif