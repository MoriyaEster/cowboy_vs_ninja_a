#include "Character.hpp"

namespace ariel
{
    using namespace std;

    // ************************************************************************//
    Character::Character(Point location, int damage, std::string name)
        : _location(location), _damage(damage), _name(name)
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

    // ************************************************************************//

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

    // ************************************************************************//

    bool Character::isAlive()
    {
        if (_damage)
        {
            return true;
        }
        return false;
    }

    double Character::distance(Character &other)
    {
        // this->getLocation().distance(Character::other.getLocation());
        return 0.0;
    }

    void Character::hit(int value)
    {
    }

    std::string Character::getName()
    {
        return this->_name;
    }

    Point Character::getLocation()
    {
        return this->_location;
    }

    void Character::print()
    {
        cout << "The name of the character: " << this->getName() << " , The num of damage: " << this->getDamage() << " , The location of the character is: ";
        (this->getLocation()).print();
    }
}