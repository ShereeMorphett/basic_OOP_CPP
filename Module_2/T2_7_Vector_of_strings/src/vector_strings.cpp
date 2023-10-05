#include "vector_strings.hpp"

#include <iostream>
#include <vector>
/*
Description
In this task, you are required to implement a program that appends and removes the given strings to/from a vector, as commanded by the user. 
You should implement a simple command line interface in CMDReader function that implements the following.


If user command is ADD, CMDReader function should call Adder function, which implements the following.

The program should first prompt:

Then it reads the name from the user and adds it to a vector.

Finally, it prints

Number of names in the vector:<newline>
<vector size><newline>
where <newline> is the newline character and <vector size> is the number of elements in the specified vector.

If user command is REMOVE, CMDReader function should call Remover function, which removes the last string from the specified vector. Then, it outputs the removed string in the following way.

Removing the last element:<newline>
<removed string><newline>
where <newline> is the newline character and <removed string> is the last element of the vector.

If user command is PRINT, CMDReader function should call Printer function, which outputs all stored strings, each on a separate line.

If user command is QUIT, CMDReader function should exit the program. */

void Adder(std::vector<std::string>& names)
{
	std::string input;
  	std::cout << "Enter a name:" << std::endl;
	std::cin >> input;
	names.push_back(input);
	std::cout << "Number of names in the vector:" << std::endl;
	std::cout << names.size() << std::endl;
}

void Remover(std::vector<std::string>& names)
{
	std::cout << "Removing the last element:" << std::endl;
	std::cout << names[names.size() - 1] << std::endl;
	names.pop_back();

}

void Printer(std::vector<std::string>& names)
{
	if (names.size() != 0)
	{
		for (unsigned int i = 0; i < names.size(); i++)
		{
			std::cout << names[i] << std::endl;
		}
	}
}

static int Index(std::string input)
{
    std::string	levels[4] = {"ADD", "PRINT", "REMOVE", "QUIT"};
    int i = 0;
    
    while (levels[i] != input && i < 4)
        i++;
    return i;
}

void CMDReader()
{
	std::vector<std::string> names;
	std::string input;
	
	std::cout << "Commands: ADD, PRINT, REMOVE, QUIT" << std::endl;
	while (1)
	{
		std::cout << "Enter a command:" << std::endl;
		std::cin >> input;

		switch(Index(input))
		{
			default:
				break;
			case 0:
				Adder(names);
				break;
			case 1:
				Printer(names);
				break;
			case 2:
				Remover(names);
				break;
			case 3:
				return ;
		}
	}
	

}
