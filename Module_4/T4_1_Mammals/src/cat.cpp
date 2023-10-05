#include "cat.hpp"


   std::string Cat::GetName()
   {
        return name_;
   }

    std::string Cat::MakeSound()
    {
        std::string sound = "Meow";
        return sound;
    }

    Cat::Cat(std::string name, double weight): Mammal(weight)
    {
        name_ = name;
    }