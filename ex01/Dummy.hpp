#ifndef DUMMY_HPP
#define DUMMY_HPP

# include <iostream>
# include "ATarget.hpp"
# include "Aspell.hpp"

class ATarget;
class ASpell;

class Dummy : public ATarget{
	public:
		Dummy() : _type("Target Practice Dummy"){} //ATarget(_type), 
		Dummy(const Dummy & dum_cp){
			_type = dum_cp._type;
		}
		Dummy & operator=(const Dummy & dum_op){
			_type = dum_op._type;
			return (*this);
		}
		~Dummy(){}

		ATarget *clone(){
			return (new Dummy(*this));
		}
		void	getHitBySpell(const ASpell & aspell) const{
			std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
}

	private:
		std::string _type;

};

#endif