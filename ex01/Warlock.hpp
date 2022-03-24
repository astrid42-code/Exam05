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
			std::cout << _spell->getName() << _spell->getEffects() << std::endl;
		}
		void	forgetSpell(std::string spell){
			// fait oublier le sort s'il en connait un 
			// if (_spell == a quelque chose)
			// delete _spell;
		}
		void	launchSpell(std::string spell, ATarget &atarget){
			// for (int i = 0; i < 100; i++){
				std::map<std::string, std::string> m;
				m.insert(std::make_pair(atarget.getType(), spell));
				// std::cout << spell << std::endl;
				//  if (spell == _spell->getEffects())
					_spell->launch(atarget);
				// PB : a quoi sert m ici si je ne m'en sers pas pour le launch?
				// comment l'integrer?
			// }

		}

    private:
        Warlock();
        Warlock(const Warlock & warlock_cp);
        Warlock & operator=(const Warlock & warlock_op);
        std::string _name;
        std::string _title;
		ASpell *_spell; // recuperer un ptr sur l'objet aspell 
};
// std::ostream operator<<(ostream &o, const Warlock & warlock_op);

#endif