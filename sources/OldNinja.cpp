#include "Ninja.cpp"
#include "YoungNinja.hpp"
#include "Character.cpp"

using namespace ariel;

OldNinja::OldNinja(Point location, std::string name)
    :Ninja(location, 150, name, 8)
{
}