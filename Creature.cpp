/***********************************************************
 ** Author: Carlos Carrillo                                *
 ** Date:   11/02/2015                                     *
 ** Description: This is the class implementation file of  *
 *  a class called Creature. This is an abstract base      *
 *  class that contains 2 virtual functions and a void     *
 *  function. It also has 5 subclasses (children), one for *
 *  each game character.                                   *
 **********************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Creature.hpp"

using namespace std;

/*************************************************
 *             Creature::Creature                *
 * Default constructor: initializes the memeber  *
 * variable fuerza to zero.                      *
 ************************************************/

Creature::Creature()
{
    fuerza = 0;
    achilles = 1;
}

/*******************************************************
 *                 Creature::Creature                  *
 * 2-parameter constructor to pass the strength value  *
 * as an object parameter to main().                   *
 ******************************************************/

Creature::Creature(double strength, int aquiles)
{
    setFuerza(strength);
    setAchilles(aquiles);
}

/*************************************************
 *             Creature::setFuerza               *
 * This function sets the value of the member    *
 * variable fuerza.                              *
 ************************************************/

void Creature::setFuerza(double strength)
{
    fuerza = strength;
}

/*************************************************
 *             Creature::getFuerza               *
 * This function returns the value of the member *
 * variable fuerza.                              *
 ************************************************/

double Creature::getFuerza()
{
    return fuerza;
}

/*************************************************
 *            Creature::setAchilles              *
 * This function sets the value of the member    *
 * variable achilles.                            *
 ************************************************/

void Creature::setAchilles(int aquiles)
{
    achilles = aquiles;
}

/*************************************************
 *            Creature::getAchilles              *
 * This function returns the value of the member *
 * variable achilles.                              *
 ************************************************/

int Creature::getAchilles()
{
    return achilles;
}

/***************************************************
 *           Creature::calculation()               *
 * This function uses the virtual function attack  *
 * to appropiately roll the dice n number of times *
 * and n number of sides according to the warriors'*
 * features.                                       *
 **************************************************/

void Creature::diePlayer(int attacker, int defenser)
{
    std::string attackerName;
    std::string defenserName;
    int numDieAttacker = 0;
    int sideDieAttacker = 0;
    int numDieDefender = 0;
    int sideDieDefender = 0;
    
    //set values for the attackers
    if(attacker == 1)
      {
        attackerName = "BARBARIAN";
        numDieAttacker = 2;
        sideDieAttacker = 6;
      }
    
    if(attacker == 2)
      {
        attackerName = "REPTILE";
        numDieAttacker = 3;
        sideDieAttacker = 6;
      }

    if(attacker == 3)
      {
        attackerName = "BLUE_MEN";
        numDieAttacker = 2;
        sideDieAttacker = 10;
      }

    if(attacker == 4)
      {
        attackerName = "GOBLIN";
        numDieAttacker = 2;
        sideDieAttacker = 6;
      }

    if(attacker == 5)
      {
        attackerName = "SHADOW";
        numDieAttacker = 2;
        sideDieAttacker = 10;
      }
    
    //set values for the defense
    if(defenser == 1)
      {
        defenserName = "BARBARIAN";
        numDieDefender = 2;
        sideDieDefender = 6;
      }
    
    if(defenser == 2)
      {
        defenserName = "REPTILE";
        numDieDefender = 1;
        sideDieDefender = 6;
      }
    
    if(defenser == 3)
      {
        defenserName = "BLUE_MEN";
        numDieDefender = 3;
        sideDieDefender = 6;
      }
    
    if(defenser == 4)
      {
        defenserName = "GOBLIN";
        numDieDefender = 1;
        sideDieDefender = 6;
      }
    
    if(defenser == 5)
      {
        defenserName = "SHADOW";
        numDieDefender = 1;
        sideDieDefender = 6;
      }

    //methods to roll the dice
     srand(time(0));
    
    //Attacker Rolls
        cout <<"\n"<<attackerName<<" attacks "<<defenserName<<"!!"<< endl;
        int scores1 [numDieAttacker];
        for(int i=0; i<numDieAttacker; i++)
          {
            int dieRoll1 = rand() % sideDieAttacker + 1;
            scores1[i] = dieRoll1;
            cout <<"Roll #"<<i+1<<" was: "<<dieRoll1<<endl;
          }
    
        double total1;
        for(int i=0; i<numDieAttacker; i++)
          {
            total1 += scores1[i];
          }
        cout <<"The attack score for "<<attackerName<<" was: "<<total1<<endl;
    
        //ACHILLES ATTACK FROM GOBLIN
        if(attackerName == "GOBLIN" && total1 == 12)
        {
            achilles = 2;
            cout <<"\n*GOBLIN JUST HIT ITS OPPONENT IN THE ACHILLES TENDON!!*"<<endl;
            cout <<"*THE OPPONENT'S ATTACK SCORE WILL BE HALVED!!*"<<endl;
        }
    
    //Defense Rolls
        cout <<"\n"<<defenserName<<" self-defends from "<<attackerName<<"!!"<< endl;
        int scores2 [numDieDefender];
        for(int i=0; i<numDieDefender; i++)
          {
            int dieRoll2 = rand() % sideDieDefender + 1;
            scores2[i] = dieRoll2;
            cout <<"Roll #"<<i+1<<" was: "<<dieRoll2<<endl;
          }
        
        double total2;
        for(int i=0; i<numDieDefender; i++)
          {
            total2 += scores2[i];
          }
        cout <<"The defense score for "<<defenserName<<" was: "<<total2<<"\n"<<endl;
    
        double temp;
        temp = attacks(total1, total2);
    
        if(temp < 1)
        {
            cout <<"***"<<defenserName<<" IS DEAD AND OUT OF COMBAT!!!***\n"<<endl;
        }
    
    total1 = 0;
    total2 = 0;

}
