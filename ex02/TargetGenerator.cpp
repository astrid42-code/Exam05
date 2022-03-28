#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

// TargetGenerator::TargetGenerator(std::string type) : 

TargetGenerator::TargetGenerator(const TargetGenerator & tg_cp){}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget *atarget){
	m.insert(std::make_pair(atarget->getType(), atarget->clone()));
}

void TargetGenerator::forgetTargetType(std::string const & target_type){
	std::map<std::string, ATarget * >::iterator it;
	it = m.find(target_type);
	if (it != m.end()){
		delete it->second;
		m.erase(target_type);
	}
}

ATarget* TargetGenerator::createTarget(std::string const & target_type){
    std::map<std::string, ATarget * >::iterator it;
	it = m.find(target_type);
	if (it != m.end()){
		return (it->second);
	}
	return (NULL);
}