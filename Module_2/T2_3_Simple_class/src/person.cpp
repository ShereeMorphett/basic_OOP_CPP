#include "person.hpp"



	std::string Person::GetName()
	{
		return (name);
	}

	int Person::GetAge(int currentYear)
	{
		return (currentYear - birthYear);
	}


	Person::Person(std::string str, int yob)
	{
		name = str;
		birthYear = yob;
	}


