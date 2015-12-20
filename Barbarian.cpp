/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   11/03/2015                                   *
 ** Description: This is the class implementation file   *
 *  of a class called Barbarian. This class is a derived *
 *  class from the Creature class. The subclass overides *
 *  the virtual member function attacks() in order to    *
 *  calculate the battle scores for the Barbarian        *
 *  warrior.                                             *
 ********************************************************/

#include <iostream>
#include <string>
#include <ctime>

#include "Creature.hpp"
#include "Barbarian.hpp"

using namespace std;

double Barbarian::attacks(double attackRollScore, double defenseRollScore)
{
    int armor = 0;
    double damage2;
    double damage;
    
    damage = attackRollScore/achilles - defenseRollScore;
    damage2 = damage - armor;
    
    cout <<"BARBARIAN'S ARMOR: "<<armor<<endl;
    cout <<"DAMAGE to Barbarian: "<<damage2<<endl;
    cout <<"Barbarian's INITIAL Strength: "<<"12"<<endl;
    
    if(fuerza != 12)
     {
        cout <<"Barbarian's Strength after LAST ATTACK: "<<fuerza<<endl;
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
    
    cout <<"Barbarian's Strength after THIS ATTACK: "<<fuerza<<"\n"<<endl;
    
    return fuerza;
}
