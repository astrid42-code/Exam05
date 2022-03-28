#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

# include <iostream>
# include "ATarget.hpp"
# include "ASpell.hpp"

class ATarget;
class ASpell;

class BrickWall : public ATarget{
	public:
		BrickWall() : ATarget("Inconspicuous Red-brick Wall"){}
		BrickWall(const BrickWall & dum_cp){
			_type = dum_cp._type;
		}
		BrickWall & operator=(const BrickWall & dum_op){
			_type = dum_op._type;
			return (*this);
		}
		~BrickWall(){}

		virtual ATarget *clone() const{
			return (new BrickWall(*this));
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