/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   11/03/2015                                   *
 ** Description: This is the class specification file    *
 *  of a class called Blue. This class is a derived      *
 *  class from the Creature class. The subclass overides *
 *  the virtual member function attacks() in order to    *
 *  calculate the battle scores for the Blue warrior.    *
 ********************************************************/

//Blue.hpp
#ifndef BLUE_HPP
#define BLUE_HPP

#include "Creature.hpp"

class Blue : public Creature
{
public:
    
    //method to calculate attack
    double attacks (double attackRollScore, double defenseRollScore);
    
    Blue(double strength, int aquiles):Creature(strength, aquiles)
    {
    }
};
#endif
