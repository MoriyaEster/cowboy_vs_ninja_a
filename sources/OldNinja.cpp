#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "Character.hpp"

using namespace ariel;

OldNinja::OldNinja(std::string name, Point location)
    :Ninja(location, 150, name, 8)
{
}