#ifndef DUMMY_HPP
#define DUMMY_HPP

# include <iostream>
# include "ATarget.hpp"

class Dummy : public ATarget{
	public:
		Dummy() : ATarget(_type), _type("Target Practice Dummy"){}
		~Dummy(){}

		Dummy *clone(){
			return (*this);
		}

	private:
		std::string _type;
		Dummy(const Dummy & dum_cp);
		Dummy & operator=(const Dummy & dum_op);

};

#endif