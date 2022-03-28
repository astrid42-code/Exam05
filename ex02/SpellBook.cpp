#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void	SpellBook::learnSpell(ASpell *aspell){
	// copie un sort dans le SpellBook
	// _spell = aspell.getName();
	m.insert(std::make_pair(aspell->getName(), aspell->clone()));
}

void	SpellBook::forgetSpell(std::string const &spell_name){
	// fait oublier le sort s'il est dedans 
	std::map<std::string, ASpell * >::iterator it;
	it = m.find(spell_name);
	if (it != m.end()){
		delete it->second;
		m.erase(spell_name);
	}
}

ASpell	* SpellBook::createSpell(std::string const &spell_name){
	// retourne un objet aspell (a creer en fct du spell_name envoye)
	std::map<std::string, ASpell * >::iterator it;
	it = m.find(spell_name);
	if (it != m.end()){
		return (it->second);
	}
	return (NULL);
}