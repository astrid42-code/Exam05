#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

// TargetGenerator::TargetGenerator(std::string type) : 

TargetGenerator::TargetGenerator(const TargetGenerator & tg_cp){}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget *atarget){

}

void TargetGenerator::forgetTargetType(std::string const & target_type){

}

ATarget* TargetGenerator::createTarget(std::string const & target_type){
    
}