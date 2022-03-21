#ifndef ATARGET_HPP
#define ATARGET_HPP

# include <iostream>
# include "Aspell.hpp"

class ATarget {
	public:
		ATarget(std::string type) : _type(type){}
		virtual ~ATarget();

		std::string getType() const{
			return (_type);
		}
		virtual ATarget *clone() = 0;
		void	getHitBySpell(const ASpell & aspell){
			std::cout << _type << " has been " << aspell.getEffects() << "!" << std::endl;
		}


	private:
		ATarget();
		ATarget(const ATarget & atarget_cp);
		ATarget & operator=(const ATarget & atarget_op);
		std::string _type;


};

#endif