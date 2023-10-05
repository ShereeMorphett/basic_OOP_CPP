#include "fantasy_dragon.hpp"

// Define FantasyDragon's methods here

void FantasyDragon::Eat(std::list<Food>& foodList)
{
    for (auto itr = foodList.begin(); itr != foodList.end();)
    {
        if (itr->type == FoodType::People || itr->type == FoodType::PeopleFood)
        {
            std::cout << "Fantasy dragon ate: " << itr->name << std::endl;
            size_++;
            itr = foodList.erase(itr); 
        }
        else
        {
            ++itr;
        }
    }   
}


void FantasyDragon::Hoard(std::list<Treasure>& treasure)
{
    std::list<Treasure>::iterator itr;

    for (itr = treasure.begin(); itr != treasure.end();)
    {
        if (itr->type == TreasureType::Jewellery)
        {
            std::cout << "Fantasy dragon received: " << itr->name << std::endl;
            treasure_.push_back(*itr);
            itr = treasure.erase(itr);
        }
        else
        {
            ++itr;
        }
    } 
}


FantasyDragon::FantasyDragon(std::string name, size_t age, size_t size) : Dragon(name, age, size)
{}

FantasyDragon::~FantasyDragon()
{}