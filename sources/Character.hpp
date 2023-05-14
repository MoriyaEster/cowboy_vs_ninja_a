#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <stdio.h>
#include <cmath>
#include "Point.cpp"

namespace ariel
{

    class Character{

        Point _location;
        int _damage;
        std::string _name;

        public:

            Character(Point location, int damage, std::string name);
            Character();

            Point getLocation();
            void setLocation(Point location);
            int getDamage();
            void setDamage(int damage);
            std::string getName();



    };
}