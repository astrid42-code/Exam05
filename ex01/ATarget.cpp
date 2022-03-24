#include "ATarget.hpp"

ATarget::ATarget() : _type("Abruty"){}

ATarget::ATarget(std::string type) : _type(type){}

ATarget::ATarget(const ATarget & atarget_cp){
	_type = atarget_cp._type;
}

ATarget & ATarget::operator=(const ATarget & atarget_op){
	_type = atarget_op._type;
	return (*this);
}

ATarget::~ATarget(){}

std::string ATarget::getType() const{
	return (_type);
}

void	ATarget::getHitBySpell(const ASpell & aspell) const{
	std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
}