#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) { 
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::Warlock(const Warlock & warlock_cp) : _name(warlock_cp._name), _title(warlock_cp._title) {
}

Warlock::~Warlock(){
	std::cout << _name << ": My job here is done!" << std::endl;
}


Warlock & Warlock::operator=(const Warlock & warlock_op){
	_name = warlock_op._name;
	_title = warlock_op._title;
	return (*this);
}

// std::ostreqm operator<(ostream &o, const Warlock & warlock_op){
// 	o
// 	<< 
// 	return (o);
// }

const std::string &	Warlock::getName() const{
	return (_name);
}

const std::string & Warlock::getTitle() const{
	return (_title);
}

void	Warlock::setTitle(const std::string title){
	_title = title;
}

void Warlock::introduce() const{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}