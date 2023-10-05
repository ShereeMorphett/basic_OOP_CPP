#include "dragon_cave.hpp"

// Define DragonCave's methods here


const std::list<Dragon*>& DragonCave::GetDragons() const
{
    return dragonCave_;
}


void DragonCave::Accommodate(Dragon*  dragon)
{
    dragonCave_.push_back(dragon);
}



void DragonCave::Evict(std::string name)
{
    for (auto itr = dragonCave_.begin(); itr != dragonCave_.end();)
    {
       if ((*itr)->GetName() == name)
	   {
		 	dragonCave_.erase(itr);
			break;
	   }
    }
}

std::ostream& operator<<(std::ostream& os, const DragonCave& cave)
{
    os << "DragonCave dwellers:\n";

    for (auto& dragon : cave.GetDragons())
    {
        os << "\n" << *dragon;
    }

    return os;
}



DragonCave::~DragonCave() 
{
    for (auto dragon : dragonCave_)
        delete dragon;
}