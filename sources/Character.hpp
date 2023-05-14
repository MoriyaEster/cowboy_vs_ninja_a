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

    class Character
    {

        Point _location;
        int _damage;
        std::string _name;

    public:
        Character(Point location, int damage, std::string name);
        Character();

        void setLocation(Point location);
        int getDamage();
        void setDamage(int damage);

        bool isAlive();
        double distance(Character &other);
        void hit(int value);
        std::string getName();
        Point getLocation();
        void print();
    };
}