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

		virtual ATarget *clone() const{
			return (new Dummy(*this));
		}

	private:
		std::string _type;

};

#endif