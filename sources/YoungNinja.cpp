#include "Ninja.hpp"
#include "YoungNinja.hpp"
#include "Character.hpp"

using namespace ariel;

YoungNinja::YoungNinja(std::string name, Point location)
    :Ninja(location, 120, name, 12)
{
}