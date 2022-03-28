#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class SpellBook{
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell *aspell);
		void	forgetSpell(std::string const &spell_name);
		ASpell	*createSpell(std::string const &spell_name);

    private:
		SpellBook(const SpellBook & SpellBook_cp);
		SpellBook & operator=(const SpellBook & SpellBook_op);
		std::map<std::string, ASpell * > m;
};

#endif