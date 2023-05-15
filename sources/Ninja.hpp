#pragma once

#include "Character.hpp"

namespace ariel
{

    class Ninja : public Character
    {

        int _speed;
        char _type = 'N';

    public:
        Ninja(Point location, int self_Hit, std::string name, int speed);
        // Ninja(std::string name);

        void move(Character *target);
        void slash(Character *target);
    };
}