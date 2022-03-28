#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"

class ASpell;

class TargetGenerator {
	public:
		TargetGenerator();
		// TargetGenerator(std::string type);
		TargetGenerator(const TargetGenerator & tg_cp);
		virtual ~TargetGenerator();

		virtual void learnTargetType(ATarget *atarget);
		virtual void forgetTargetType(std::string const & target_type);
		ATarget* createTarget(std::string const & target_type);

	protected:
		std::string _type;
	
	private:
		TargetGenerator & operator=(const TargetGenerator & tg_op);
		std::map<std::string, ATarget * > m;
};

#endif