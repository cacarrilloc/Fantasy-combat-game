/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   11/03/2015                                   *
 ** Description: This is the class specification file    *
 *  of a class called Shadow. This class is a derived    *
 *  class from the Creature class. The subclass overides *
 *  the virtual member function attacks() in order to    *
 *  calculate the battle scores for the Shadow warrior.  *
 ********************************************************/

//Goblin.hpp
#ifndef SHADOW_HPP
#define SHADOW_HPP

#include "Creature.hpp"

class Shadow : public Creature
{
public:
    
    double attacks (double attackRollScore, double defenseRollScore);
    
    Shadow(double strength, int aquiles):Creature(strength, aquiles)
    {
    }
};
#endif
