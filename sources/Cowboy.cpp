#include "Cowboy.hpp"
#include "Character.hpp"

using namespace ariel;

Cowboy::Cowboy(Point location, std::string name)
    : Character(location, 110, name)
{
    _type = 'C';
    _num_Of_bolls = 6;
}

// ********************************************************************** //

void Cowboy::shoot(Character *target)
{
}

bool Cowboy::hasboolets()
{
    return true;
}

void Cowboy::reload()
{
    _num_Of_bolls += 6;
}

// ********************************************************************** //

int Cowboy::getNum_Of_bolls()
{
    return _num_Of_bolls;
}
char Cowboy::getType()
{
    return _type;
}