/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   11/03/2015                                   *
 ** Description: This is the class implementation file   *
 *  of a class called Goblin. This class is a derived    *
 *  class from the Creature class. The subclass overides *
 *  the virtual member function attacks() in order to    *
 *  calculate the battle scores for the Goblin warrior.  *
 ********************************************************/

#include <iostream>
#include <string>
#include <ctime>

#include "Creature.hpp"
#include "Goblin.hpp"

using namespace std;

double Goblin::attacks(double attackRollScore, double defenseRollScore)
{
    int armor = 3;
    double damage2;
    double damage;
    
    damage = attackRollScore/achilles - defenseRollScore;
    damage2 = damage - armor;
    
    cout <<"GLOBIN'S ARMOR: "<<armor<<endl;
    cout <<"DAMAGE to Goblin: "<<damage2<<endl;
    cout <<"Goblin's INITIAL Strength: "<<"8"<<endl;
    
    if(fuerza != 8)
     {
        cout <<"Goblin's Strength after LAST ATTACK: "<<fuerza<<endl;
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
    
    cout <<"Goblin's Strength after THIS ATTACK: "<<fuerza<<"\n"<<endl;
    
    return fuerza;
}
