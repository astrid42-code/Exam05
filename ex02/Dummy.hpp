#ifndef DUMMY_HPP
#define DUMMY_HPP

# include <iostream>
# include "ATarget.hpp"
# include "ASpell.hpp"

class ATarget;
class ASpell;

class Dummy : public ATarget{
	public:
		Dummy() : ATarget("Target Practice Dummy"){}
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

		std::string getType() const{
			return (_type);
		}

		void	getHitBySpell(const ASpell & aspell) const{
			std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
		}

	private:
		// std::string _type;

};

#endif