/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   11/03/2015                                   *
 ** Description: This is the class implementation file   *
 *  of a class called Blue. This class is a derived      *
 *  class from the Creature class. The subclass overides *
 *  the virtual member function attacks() in order to    *
 *  calculate the battle scores for the Blue warrior.    *
 ********************************************************/

#include <iostream>
#include <string>
#include <ctime>

#include "Creature.hpp"
#include "Blue.hpp"

using namespace std;

double Blue::attacks(double attackRollScore, double defenseRollScore)
{
    int armor = 3;
    double damage2;
    double damage;
    
    damage = attackRollScore/achilles - defenseRollScore;
    damage2 = damage - armor;
    
    cout <<"BLUE'S ARMOR: "<<armor<<endl;
    cout <<"DAMAGE to Blue: "<<damage2<<endl;
    cout <<"Blue's INITIAL Strength: "<<"12"<<endl;
    
    if(fuerza != 12)
     {
        cout <<"Blue's Strength after LAST ATTACK: "<<fuerza<<endl;
     }
    
    double newStrength;
    newStrength = fuerza - damage2;
    
    if(newStrength > fuerza)
      {
        newStrength = fuerza;
      }
    else
      {
        fuerza = newStrength;
      }
    
    cout <<"Blue's Strength after THIS ATTACK: "<<fuerza<<"\n"<<endl;
    
    return fuerza;
}
