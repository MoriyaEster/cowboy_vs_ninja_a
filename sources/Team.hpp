#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <vector>

#include "Point.cpp"
#include "Character.cpp"
#include "Cowboy.cpp"
#include "Ninja.cpp"
namespace ariel
{

    class Team
    {
    public:
        vector <Character> team;
        Character *leader;

        Team(Character *leader);
        void add(Character *player);
        

    };

}
