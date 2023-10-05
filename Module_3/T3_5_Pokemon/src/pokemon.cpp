#include "pokemon.hpp"

/*
Description

    In this exercise, you are required create a collection of Pokemons.
    A Pokemon is an entity with a name (string) and an identifier (size_t).
    The collection operates on a list that is consist of (string, size_t) pairs.
    You should review the function interfaces and respective descriptions in pokemon.hpp file in the provided template.

    You need to implement the following methods of the PokemonCollection class.
        Add(name, id): adds a new Pokemon with given name/id pair at the end of list pokemon_. See the class declaration.
        Remove(name, id): removes the first Pokemon with matching name and id.
        Print: prints the Pokemons. See the method documentation for the required format.
        SortByName: sorts the Pokemon collection by their name.
                    If two names are equal, their order is determined by their ids.
        SortById: sorts the Pokemon collection by their id.
                  If two ids are equal, their order is determined by their names.

    And the following constructor:

        PokemonCollection(c1, c2): merges the contents of the two collections. Duplicate elements must be removed.
        The grading weight is 1 for Add, Remove, Print, SortByName and SortById, and 2 for the merge constructor. 
        Especially for the last three functions, it is recommended that you familiarize yourself with the algorithms 
        specialized for the list container (such as sort and unique).

    Hint
        It is better to use list-specific sort unique functions instead of generic std::sort and std::unique algorithms. 
        See the reference documentation of the list class.

    Warning
        You need get full points from the Add and Print methods before the remaining methods can be tested.
        In addition, the sort methods must get full points for the constructor to be tested.
*/

/**
 * \brief Construct a new Pokemon Collection object
 *
 * initializes the collection to by copying the parameter
 * You don't need to define this in the cpp file as the definition is given
 * here
 *
 * \param pokemons list of pokemeons
 */


PokemonCollection::PokemonCollection(PokemonCollection collection, PokemonCollection collection2)
{
    
    std::copy(collection.begin(), collection.end(), std::back_inserter(pokemons_));
    std::copy(collection2.begin(), collection2.end(), std::back_inserter(pokemons_));

    pokemons_.sort();
    pokemons_.unique();
}

void PokemonCollection::Add(const std::string &name, size_t id)
{

    std::pair<std::string, std::size_t> newPair;
    newPair.first = name;
    newPair.second = id;
    pokemons_.push_back(newPair);

}

bool PokemonCollection::PokemonCollection::Remove(const std::string &name, size_t id)
{
    for (std::list<std::pair<std::string, size_t>>::const_iterator it = pokemons_.begin(); it != pokemons_.end(); ++it)
    {
        const std::pair<std::string, size_t>& pair = *it;
        if (pair.second  == id && pair.first  == name)
        {
                pokemons_.erase(it);
                return true;
        }
    }
    return false;
}

void PokemonCollection::Print() const
{ 
    for (std::list<std::pair<std::string, size_t>>::const_iterator it = pokemons_.begin(); it != pokemons_.end(); ++it)
    {
        const std::pair<std::string, size_t>& pair = *it;
        std::cout << "id: " << pair.second << ", name: " << pair.first << std::endl;
    }
}


void PokemonCollection::SortByName()
{
    pokemons_.sort([](const std::pair<std::string, size_t>& a, const std::pair<std::string, size_t>& b) {
        return a.first < b.first;
    });
}


void PokemonCollection::SortById()
{
    pokemons_.sort([](const std::pair<std::string, size_t>& a, const std::pair<std::string, size_t>& b) {
        return a.second < b.second;
    });
}
