#pragma once

#include "Character.cpp"

namespace ariel
{
    class Cowboy : public Character
    {
        int _num_Of_bolls;
        char _type = 'C';

    public:
        Cowboy(std::string name, Point location);
        // Cowboy(std::string name);

        void shoot(Character *target);
        bool hasboolets();
        void reload();

        int getNum_Of_bolls();
        char getType();
    };
}
