#include <stdio.h>
#include "doctest.h"
#include <stdexcept>
#include "iostream"

#include "sources/Team.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Test case 1: Adding players to the team")
{
    Cowboy* tom = new Cowboy("Tom", Point(1, 1));
    Team team(tom);

    CHECK(team.stillAlive() == 1);

    team.add(new YoungNinja("Yogi", Point(2, 2)));
    team.add(new TrainedNinja("Hikari", Point(3, 3)));

    CHECK(team.stillAlive() == 3);
}

TEST_CASE("Test case 2: Attacking another team")
{
    Cowboy* tom = new Cowboy("Tom", Point(1, 1));
    Team teamA(tom);

    TrainedNinja* hikari = new TrainedNinja("Hikari", Point(2, 2));
    teamA.add(hikari);

    Team teamB(new OldNinja("Sushi", Point(3, 3)));
    teamB.add(new YoungNinja("Yogi", Point(4, 4)));

    teamA.attack(&teamB);
    teamB.attack(&teamA);

    CHECK(teamA.stillAlive() >= 1);
    CHECK(teamB.stillAlive() >= 1);
}

TEST_CASE("Test case 3: Copy constructor")
{
    Cowboy* tom = new Cowboy("Tom", Point(1, 1));
    Team teamA(tom);
    teamA.add(new YoungNinja("Yogi", Point(2, 2)));
    teamA.add(new TrainedNinja("Hikari", Point(3, 3)));

    Team teamB(teamA);

    CHECK(teamB.stillAlive() == 3);
}

TEST_CASE("Test case 4: Assignment operator")
{
    Cowboy* tom = new Cowboy("Tom", Point(1, 1));
    Team teamA(tom);
    teamA.add(new YoungNinja("Yogi", Point(2, 2)));
    teamA.add(new TrainedNinja("Hikari", Point(3, 3)));

    Team teamB(new Cowboy("Jerry", Point(4, 4)));
    teamB.add(new OldNinja("Sushi", Point(5, 5)));

    teamB = teamA;

    CHECK(teamB.stillAlive() == 3);
}

TEST_CASE("Test case 5: Attacking an empty team")
{
    Cowboy* tom = new Cowboy("Tom", Point(1, 1));
    Team teamA(tom);

    Team teamB(new OldNinja("Sushi", Point(2, 2)));

    teamA.attack(&teamB);

    CHECK(teamA.stillAlive() >= 1);
    CHECK(teamB.stillAlive() == 1);
}

TEST_CASE("Test case 6: Attacking with no players in the team")
{
    Team teamA(nullptr);
    Team teamB(new OldNinja("Sushi", Point(1, 1)));

    teamA.attack(&teamB);

    CHECK(teamA.stillAlive() == 0);
    CHECK(teamB.stillAlive() == 1);
}

TEST_CASE("Test case 7: Attacking same team")
{
    Cowboy* tom = new Cowboy("Tom", Point(1, 1));
    Team team(tom);

    team.add(new YoungNinja("Yogi", Point(2, 2)));
    team.add(new TrainedNinja("Hikari", Point(3, 3)));

    team.attack(&team);

    CHECK(team.stillAlive() == 3);
}

TEST_CASE("Test case 8: Adding players and attacking")
{
    Cowboy* tom = new Cowboy("Tom", Point(1, 1));
    Team teamA(tom);

    SUBCASE("Adding players")
    {
        teamA.add(new YoungNinja("Yogi", Point(2, 2)));
        teamA.add(new TrainedNinja("Hikari", Point(3, 3)));

        CHECK(teamA.stillAlive() == 3);
    }

    SUBCASE("Attacking")
    {
        Team teamB(new OldNinja("Sushi", Point(4, 4)));

        teamA.attack(&teamB);

        CHECK(teamA.stillAlive() >= 1);
        CHECK(teamB.stillAlive() == 1);
    }
}


TEST_CASE("Test case 9: Attacking when no players are alive")
{
    Team teamA(nullptr);
    Team teamB(new OldNinja("Sushi", Point(1, 1)));

    CHECK_NOTHROW(teamA.attack(&teamB));
    CHECK(teamB.stillAlive() == 1);
}

TEST_CASE("Test case 14: Attacking an empty team")
{
    Cowboy* tom = new Cowboy("Tom", Point(1, 1));
    Team teamA(tom);

    Team teamB(nullptr);

    CHECK_NOTHROW(teamA.attack(&teamB));
    CHECK(teamA.stillAlive() == 1);
}

TEST_CASE("Test case 10: Attacking same team")
{
    Cowboy* tom = new Cowboy("Tom", Point(1, 1));
    Team team(tom);

    team.add(new YoungNinja("Yogi", Point(2, 2)));
    team.add(new TrainedNinja("Hikari", Point(3, 3)));

    CHECK_NOTHROW(team.attack(&team));
    CHECK(team.stillAlive() == 3);
}