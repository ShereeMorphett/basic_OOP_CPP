#include "list.hpp"

#include <iostream>
#include <string>


std::istream& GetLines(std::istream& is, std::list<std::string>& list)
{
    list.clear();
    std::string string;

    while (std::getline(is, string))
        list.push_back(string);

    return is;
}


void Print(const std::list<std::string>& list)
{
    for (std::list<std::string>::const_iterator it = list.begin(); it != list.end(); ++it)
        std::cout << *it << std::endl;
}


void SortAndUnique(std::list<std::string>& list)
{
  list.sort();
  list.unique();

}