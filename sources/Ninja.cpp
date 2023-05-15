#include "Ninja.hpp"
#include "Character.hpp"
#include "Point.hpp"

using namespace ariel;

Ninja::Ninja(Point location, int self_Hit, std::string name, int speed)
    : Character(location, self_Hit, name), _speed(speed)
{
}

// Ninja::Ninja(std::string name)
//     :Character(Point(), self_Hit, name), _speed(speed)
// {
// }

void Ninja::move(Character *target)
{
}
void Ninja::slash(Character *target)
{
}
