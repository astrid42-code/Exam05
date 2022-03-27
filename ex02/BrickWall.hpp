#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

# include <iostream>
# include "ATarget.hpp"
# include "ASpell.hpp"

class ATarget;
class ASpell;

class Brickwall : public ATarget{
	public:
		Brickwall() : ATarget("Inconspicuous Red-brick Wall"){}
		Brickwall(const Brickwall & dum_cp){
			_type = dum_cp._type;
		}
		Brickwall & operator=(const Brickwall & dum_op){
			_type = dum_op._type;
			return (*this);
		}
		~Brickwall(){}

		virtual ATarget *clone() const{
			return (new Brickwall(*this));
		}

		std::string getType() const{
			return (_type);
		}

		void	getHitBySpell(const ASpell & aspell) const{
			std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
		}

	private:

};

#endif