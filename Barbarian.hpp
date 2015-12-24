/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   11/03/2015                                   *
 ** Description: This is the class specification file    *
 *  of a class called Barbarian. This class is a derived *
 *  class from the Creature class. The subclass overides *
 *  the virtual member function attacks() in order to    *
 *  calculate the battle scores for the Barbarian        *
 *  warrior.                                             *
 ********************************************************/

//Barbarian.hpp
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP

#include "Creature.hpp"

class Barbarian : public Creature
{
    
public:
    
    //method to calculate attack
    double attacks(double attackRollScore, double defenseRollScore);
    
    Barbarian(double strength, int aquiles):Creature(strength, aquiles) {}
};
#endif
