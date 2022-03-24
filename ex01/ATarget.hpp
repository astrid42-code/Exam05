#ifndef ATARGET_HPP
#define ATARGET_HPP

# include <iostream>
# include "Aspell.hpp"

class ASpell;
class ATarget {
	public:
		ATarget();
		ATarget(std::string type);
		ATarget(const ATarget & atarget_cp);
		ATarget & operator=(const ATarget & atarget_op);
		virtual ~ATarget();

		virtual std::string getType() const;
		virtual ATarget *clone() const = 0;
		void	getHitBySpell(const ASpell & aspell) const;

	protected:
		std::string _type;


};

#endif