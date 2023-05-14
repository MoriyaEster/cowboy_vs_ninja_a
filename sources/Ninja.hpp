#pragma once

#include "Character.cpp"

namespace ariel
{

    class Ninja : public Character
    {

        int _speed;
        char _type = 'N';

        Ninja(Point location, int self_Hit, std::string name, int speed);
        Ninja(std::string name);

        void move(Character *target);
        void slash(Character *target);
    };
}