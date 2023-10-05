#include "dog_class.hpp"

// Definitions of class functions with some errors


Dog::Dog(int age, std::string name)
{ 
  	age_ = age; 
  	name_ = name;
}

void Dog::SetAge(int age)
{
	age_ = age;
}


int Dog::GetAge() 
{
	return age_; 
}


void Dog::SetName(std::string name)
{
	name_ = name; 
}


std::string Dog::GetName()
{
	return name_; 
}
