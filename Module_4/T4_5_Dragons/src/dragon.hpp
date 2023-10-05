#pragma once

#include <iostream>
#include <list>
#include <string>

/* Enumeration types for the different treasures */
enum TreasureType
{
    Jewellery,
    Wisdom,
    Potions
};

/* Implementation of Treasure */
struct Treasure
{
    TreasureType type;
    std::string name;
};

/* Enumeration types for the different foods */
enum FoodType
{
    PeopleFood,
    People,
    Herbs
};

/* Implementation of Food */
struct Food
{
    FoodType type;
    std::string name;
};

class Dragon
{
    protected:
        std::string name_;
        size_t age_;
        size_t size_;
        std::list<Treasure> treasure_;
		Dragon(const Dragon &g)= delete;
        Dragon& operator=(Dragon const&) = delete;

    public:
        std::string  GetName() const;
        size_t GetAge() const;
        size_t GetSize() const;
        const std::list<Treasure>& GetTreasures() const;
        virtual void Eat(std::list<Food>& foodList) = 0;
        virtual void Hoard(std::list<Treasure>& treasure) = 0;
        Dragon(std::string name, size_t age, size_t size);
		virtual ~Dragon() = 0; // may not be correct
};

std::ostream& operator<<(std::ostream& os, const Dragon& cave);

