#pragma once

#include "Ninja.cpp"

namespace ariel
{

    class OldNinja : public Ninja
    {

    public:
        OldNinja(std::string name, Point location);
        // OldNinja(std::string name);
    };
}