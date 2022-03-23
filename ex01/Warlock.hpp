#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
# include <map>
# include "Aspell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;
class Warlock{
    public:
        Warlock(std::string name, std::string title);
        ~Warlock();


        const std::string &	getName() const;
		const std::string & getTitle() const;
		void	setTitle(const std::string title);
        void    introduce() const;
		void	learnSpell(ASpell *aspell){
			// apprend un sort au warlock
			_spell = aspell->clone();
		}
		void	forgetSpell(std::string spell){
			// fait oublier le sort s'il en connait un 
			// if (_spell == a quelque chose)
			delete _spell;
		}
		void	launchSpell(std::string spell, ATarget &atarget){
			// for (int i = 0; i < 100; i++){
				// std::map<std::string, int> m{{spell, 0}};
				std::cout << spell << std::endl;
				if (spell == _spell->getEffects())
					_spell->launch(atarget);
			// }

		}

    private:
        Warlock();
        Warlock(const Warlock & warlock_cp);
        Warlock & operator=(const Warlock & warlock_op);
        std::string _name;
        std::string _title;
		ASpell *_spell; // recuperer un ptr sur l'objet aspell (mais comment comparer ensuite que _spell = spell??)
};
// std::ostream operator<<(ostream &o, const Warlock & warlock_op);

#endif