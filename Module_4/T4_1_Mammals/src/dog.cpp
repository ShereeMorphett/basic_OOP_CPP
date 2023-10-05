#include "dog.hpp"




   std::string Dog::GetName()
   {
        return name_;
   }

    std::string Dog::MakeSound()
    {
        std::string sound = "Wuff!";
        return sound;
    }

    Dog::Dog(std::string name, double weight): Mammal(weight)
    {
        name_ = name;
    }