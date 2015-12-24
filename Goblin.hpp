/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   11/03/2015                                   *
 ** Description: This is the class specification file    *
 *  of a class called Goblin. This class is a derived    *
 *  class from the Creature class. The subclass overides *
 *  the virtual member function attacks() in order to    *
 *  calculate the battle scores for the Goblin warrior.  *
 ********************************************************/

//Goblin.hpp
#ifndef GOBLIN_HPP
#define GOBLIN_HPP

#include "Creature.hpp"

class Goblin : public Creature
{
public:
    
    double attacks (double attackRollScore, double defenseRollScore);
    
    Goblin(double strength, int aquiles):Creature(strength, aquiles) {}
};
#endif
