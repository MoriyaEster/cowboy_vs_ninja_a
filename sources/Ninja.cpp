#include "Ninja.hpp"
#include "Character.cpp"

using namespace ariel;

Ninja::Ninja(Point location, int self_Hit, std::string name, int speed)
    : Character(location, self_Hit, name), _speed(speed)
{
}

void Ninja::move(Character *target)
{
}
void slash(Character *target)
{
}