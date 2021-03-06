#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class ASpell;
class ATarget;
class SpellBook;

class Warlock{
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();

        const std::string &	getName() const;
		const std::string & getTitle() const;
		void	setTitle(const std::string title);
        void    introduce() const;
		void	learnSpell(ASpell *spell_book){
			// apprend un sort au warlock a partir du spellbook
			_book.learnSpell(spell_book);
		}
		void	forgetSpell(std::string spell_book){
			// efface le sort dans le spellbook 
			_book.forgetSpell(spell_book);
		}
		void	launchSpell(std::string spell_name, const ATarget & atarget){
			// pour creer un nouveau spell dans le spell book : creer un ptr aspell qui recupere le spell cree 
			ASpell	*aspell = _book.createSpell(spell_name);;

			// si l'objet existe, le ptr aspell launch la ref de atarget
			if (aspell)
				aspell->launch(atarget);
		}

    private:
        Warlock();
        Warlock(const Warlock & warlock_cp);
        Warlock & operator=(const Warlock & warlock_op);
        std::string _name;
        std::string _title;
		SpellBook	_book;
};

#endif