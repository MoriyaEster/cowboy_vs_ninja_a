#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <stdio.h>
#include <cmath>

namespace ariel
{

    class Point
    {
        double _x;
        double _y;

    public:
        Point(double x, double y);
        Point();
        Point(Point &other);
        double distance(Point dest);

        double getX();
        double getY();

        void print();

        Point moveTowards(Point src, Point dst, double dis);
        // Point &operator=(const Point &other);
    };
}