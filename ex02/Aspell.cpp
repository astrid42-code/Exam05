#include "Aspell.hpp"

ASpell::ASpell() : _name("Bof"), _effects("bofitude"){
}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects){
}

ASpell::ASpell(const ASpell & aspell_cp){
	_name = aspell_cp._name;
	_effects = aspell_cp._effects;
}

ASpell & ASpell::operator=(const ASpell &aspell_op){
	_name = aspell_op._name;
	_effects = aspell_op._effects;
	return (*this);
}
ASpell::~ASpell(){}

std::string ASpell::getName() const{
	return (_name);
}

std::string ASpell::getEffects() const{
	return (_effects);
}

void	ASpell::launch(const ATarget &atarget) const{
	atarget.getHitBySpell(*this); // doit recevoir en param un objet ASpell donc le pointeur this qui contient les donnees de l'objet ASpell
}