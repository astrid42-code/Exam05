#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
# include "Aspell.hpp"
# include "ATarget.hpp"

class ASpell;
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
			aspell->clone();
		}
		void	forgetSpell(std::string spell){
			// fait oublier le sort s'il en connait un
		}
		void	launchSpell(std::string spell, ATarget &atarget){
			atarget.getHitBySpell();  // a gerer
		}

    private:
        Warlock();
        Warlock(const Warlock & warlock_cp);
        Warlock & operator=(const Warlock & warlock_op);
        std::string _name;
        std::string _title;
		std::string _spell;
};
// std::ostream operator<(ostream &o, const Warlock & warlock_op);

#endif