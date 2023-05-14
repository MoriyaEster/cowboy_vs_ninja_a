#include "Point.hpp"

namespace ariel
{

    using namespace std;

    Point::Point(double x, double y)
    {
        _x = x;
        _y = y;
    }

    Point::Point()
    {
        _x = 0.0;
        _y = 0.0;
    }

    Point::Point(Point &other)
    {
        _x = other.getX();
        _x = other.getY();
    }

    double Point::distance(Point dest)
    {
        double dx = dest.getX() - _x;
        double dy = dest.getY() - _y;
        return std::sqrt(dx * dx + dy * dy);
    }

    double Point::getX()
    {
        return this->_x;
    }

    double Point::getY()
    {
        return this->_y;
    }

    void Point::print()
    {
        cout << "(" << _x << "," << _y << ")" << endl;
    }

    Point Point::moveTowards(Point src, Point dst, double dis)
    {
        return src;
    }
}