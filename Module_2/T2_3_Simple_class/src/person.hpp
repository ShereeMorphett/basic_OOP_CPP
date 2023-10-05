
/*Description
In this task, you are required to

Declare Person class in person.hpp that has


two member functions
GetName that returns the name of the person,
GetAge that takes a year as an argument and returns the age of the person on that year.

Define Person class in person.cpp.
Implement the constructor that has two arguments that initializes the the Name and birthyear attributes.
Implement GetName member function that returns the name of the person.
Implement GetAge member function that returns the age of the person at a given year.
In other words, it must have a single argument that specifies the year to calculate the age of the person, 
and returns the age of the person at that year.  */


#ifndef AALTO_ELEC_CPP_PERSON
#define AALTO_ELEC_CPP_PERSON

#include <string>

class Person
{
	private:
		std::string name;
		int birthYear;
 
	public:

	std::string GetName();
	int GetAge(int currentYear);


	Person(std::string str, int yob);

};


#endif