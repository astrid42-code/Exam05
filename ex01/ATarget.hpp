#ifndef ATARGET_HPP
#define ATARGET_HPP

# include <iostream>
# include "Aspell.hpp"

class ASpell;

class ATarget {
	public:
		ATarget(std::string type) : _type(type){}
		virtual ~ATarget();

		std::string getType() const{
			return (_type);
		}
		virtual ATarget *clone() = 0;
		void	getHitBySpell(const ASpell & aspell) const{
			std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
		}


	protected:
		std::string _type;
		ATarget(){}
		ATarget(const ATarget & atarget_cp){
			_type = atarget_cp._type;
		}
		ATarget & operator=(const ATarget & atarget_op){
			_type = atarget_op._type;
			return (*this);
		}


};

#endif