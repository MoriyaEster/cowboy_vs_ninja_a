#include "Ninja.hpp"
#include "TrainedNinja.hpp"
#include "Point.hpp"
#include "Character.hpp"


using namespace ariel;

TrainedNinja::TrainedNinja(std::string name, Point location)
    :Ninja(location, 100, name, 14)
{
}