/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   11/03/2015                                   *
 ** Description: This is the class implementation file   *
 *  of a class called Reptile. This class is a derived   *
 *  class from the Creature class. The subclass overides *
 *  the virtual member function attacks() in order to    *
 *  calculate the battle scores for the Reptile warrior. *
 ********************************************************/

#include <iostream>
#include <string>
#include <ctime>

#include "Creature.hpp"
#include "Reptile.hpp"

using namespace std;

double Reptile::attacks(double attackRollScore, double defenseRollScore)
{
    int armor = 7;
    double damage2;
    double damage;
    
    damage = attackRollScore/achilles - defenseRollScore;
    damage2 = damage - armor;
    
    cout <<"REPTILE'S ARMOR: "<<armor<<endl;
    cout <<"DAMAGE to Reptile: "<<damage2<<endl;
    cout <<"Reptile's INITIAL Strength: "<<"18"<<endl;
    
    if(fuerza != 18)
     {
        cout <<"Reptile's Strength after LAST ATTACK: "<<fuerza<<endl;
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
    
    cout <<"Reptile's Strength after THIS ATTACK: "<<fuerza<<"\n"<<endl;
    
    return fuerza;
}
