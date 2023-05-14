#pragma once

#include "Ninja.cpp"

namespace ariel
{

    class OldNinja : public Ninja
    {
        OldNinja(Point location, std::string name);
        // OldNinja(std::string name);
    };
}