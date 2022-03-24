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
			m.insert(std::make_pair(aspell->getName(), aspell->clone()));
		}
		void	forgetSpell(std::string spell_name){
			// fait oublier le sort s'il en connait un 
			std::map<std::string, ASpell * >::iterator it;
			it = m.find(spell_name);
			if (it != m.end()){
				delete it->second;
				m.erase(spell_name);
			}
		}
		void	launchSpell(std::string spell_name, ATarget &atarget){
			std::map<std::string, ASpell * >::iterator it;
			it = m.find(spell_name);
			if (it != m.end()){
				it->second->launch(atarget);
			}
		}

    private:
        Warlock();
        Warlock(const Warlock & warlock_cp);
        Warlock & operator=(const Warlock & warlock_op);
        std::string _name;
        std::string _title;
		std::map<std::string, ASpell * > m;
};

#endif