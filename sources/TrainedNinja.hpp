#pragma once

#include "Ninja.cpp"

namespace ariel
{

    class TrainedNinja : public Ninja
    {
        TrainedNinja(Point location, std::string name);
        // TrainedNinja(std::string name);
    };
}