/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   11/03/2015                                   *
 ** Description: This is the class specification file    *
 *  of a class called Reptile. This class is a derived   *
 *  class from the Creature class. The subclass overides *
 *  the virtual member function attacks() in order to    *
 *  calculate the battle scores for the Reptile warrior. *
 ********************************************************/

//Reptile.hpp
#ifndef REPTILE_HPP
#define REPTILE_HPP

#include "Creature.hpp"

class Reptile : public Creature
{
public:
    
    double attacks(double attackRollScore, double defenseRollScore);
    
    Reptile(double strength, int aquiles):Creature(strength, aquiles) {}
};
#endif
