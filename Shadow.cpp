 /*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   11/03/2015                                   *
 ** Description: This is the class implementation file   *
 *  of a class called Shadow. This class is a derived    *
 *  class from the Creature class. The subclass overides *
 *  the virtual member function attacks() in order to    *
 *  calculate the battle scores for the Shadow warrior.  *
 ********************************************************/

#include <iostream>
#include <string>
#include <ctime>

#include "Creature.hpp"
#include "Shadow.hpp"

using namespace std;

double Shadow::attacks(double attackRollScore, double defenseRollScore)
{
    double damage2;
    double damage;
    
    damage = attackRollScore/achilles - defenseRollScore;
    damage2 = damage/2;
    
    cout <<"SHADOW ONLY RECEIVES 50% OF DAMAGE: "<<endl;
    cout <<"Damage Caused: "<<damage<<endl;
    cout <<"Damage Received: "<<damage2<<endl;
    cout <<"Shadow's INITIAL Strength: "<<"12"<<endl;
    
    if(fuerza != 12)
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
    
    cout <<"Shadow's Strength after THIS ATTACK: "<<fuerza<<"\n"<<endl;
    
    return fuerza;
}
