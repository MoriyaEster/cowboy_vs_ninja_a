#include "Character.hpp"

using namespace ariel;
using namespace std;

Character::Character(Point location, int damage, std::string name)
    :_location(location), _damage(damage), _name(name)
{
    _location = location;
    _damage = _damage;
    _name = name;
}

Character::Character()
{
    _location = Point();
    _damage = 0;
    _name = "Computer";
}

Point Character::getLocation()
{
    return this->_location;
}
void Character::setLocation(Point location)
{
    this->_location = location;
}
int Character::getDamage()
{
    return this->_damage;
}
void Character::setDamage(int damage)
{
    this->_damage = damage;
}
std::string Character::getName()
{
    return this->_name;
}