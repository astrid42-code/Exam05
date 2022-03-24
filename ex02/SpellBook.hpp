#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <iostream>
# include <map>
# include "Aspell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class SpellBook{
    public:
        SpellBook(std::string name, std::string title);
        ~SpellBook();

        const std::string &	getName() const;
		const std::string & getTitle() const;
		void	setTitle(const std::string title);
        void    introduce() const;
		void	learnSpell(ASpell *aspell){
			// copie un sort dans le SpellBook
		}
		void	forgetSpell(std::string const &spell_name){
			// fait oublier le sort s'il est dedans 
			std::map<std::string, ASpell * >::iterator it;
			it = m.find(spell_name);
			if (it != m.end()){
				delete it->second;
				m.erase(spell_name);
			}
		}
		ASpell	*createSpell(std::string const &spell_name){
		}

    private:
        SpellBook();
        SpellBook(const SpellBook & SpellBook_cp);
        SpellBook & operator=(const SpellBook & SpellBook_op);
        std::string _name;
        std::string _title;
		std::map<std::string, ASpell * > m;
};

#endif