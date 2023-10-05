#include "dragon.hpp"

std::string  Dragon::GetName() const
{
    return name_;
}

size_t Dragon::GetAge() const
{
    return age_;
}

size_t Dragon::GetSize() const
{
    return size_;
}

const std::list<Treasure>& Dragon::GetTreasures() const
{
    return treasure_;
}

Dragon::Dragon(std::string name, size_t age, size_t size)
{
    name_  = name;
    age_ = age;
    size_ = size;
}

Dragon::~Dragon() {
    // Add any necessary cleanup code here
}

std::ostream& operator<<(std::ostream& os, const Dragon& dragon)
{
    os << "Dragon named: " << dragon.GetName() << ", age: " << dragon.GetAge()
       << ", size: " << dragon.GetSize() << "\nTreasures:\n";

    for (const Treasure& t : dragon.GetTreasures())
    {
        os << t.name << "\n";
    }

    return os;
}