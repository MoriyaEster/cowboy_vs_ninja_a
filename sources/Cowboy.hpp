#pragma once

#include "Character.hpp"

namespace ariel
{
    class Cowboy : public Character
    {
        int _num_Of_bolls;
        char _type;

        Cowboy(Point location, std::string name);
        Cowboy(std::string name);

        void shoot(Character *target);
        bool hasboolets();
        void reload();

        int getNum_Of_bolls();
        char getType();
    };
}
