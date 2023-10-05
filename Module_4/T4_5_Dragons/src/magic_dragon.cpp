#include "magic_dragon.hpp"

// Define MagicDragon's methods here


void MagicDragon::Eat(std::list<Food>& foodList) //this doesnt work yet
{
    std::list<Food>::iterator itr;

    for (itr = foodList.begin(); itr != foodList.end();)
    {
        if (itr->type == 2)
        {
            std::cout << "Magic dragon ate: " << itr->name << std::endl;
            size_++;
            itr = foodList.erase(itr); 
        }
        else
        {
            ++itr;
        }
    }   
}


void MagicDragon::Hoard(std::list<Treasure>& treasure)
{
    std::list<Treasure>::iterator itr;

    for (itr = treasure.begin(); itr != treasure.end();)
    {
        if (itr->type == TreasureType::Potions)
        {
            std::cout << "Magic dragon received: " << itr->name << std::endl;
            treasure_.push_back(*itr);
            itr = treasure.erase(itr); 
        }
        else
        {
            ++itr;
        }
    } 
}

MagicDragon::MagicDragon(std::string name, size_t age, size_t size) : Dragon(name, age, size)
{}

MagicDragon::~MagicDragon()
{}