#include "Ninja.cpp"
#include "YoungNinja.hpp"
#include "Character.cpp"

using namespace ariel;

TrainedNinja::TrainedNinja(Point location, std::string name)
    :Ninja(location, 100, name, 14)
{
}