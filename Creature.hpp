/***********************************************************
 ** Author: Carlos Carrillo                                *
 ** Date:   11/03/2015                                     *
 ** Description: This is the class specification file of   *
 *  a class called Creature. This is an abstract base      *
 *  class that contains a virtual function and a void      *
 *  function. Also it has 5 subclasses (children), one for *
 *  each game character.                                   *
 **********************************************************/

#ifndef CREATURE_HPP
#define CREATURE_HPP

//abstract Creature class
class Creature
{
    protected:
    
        double fuerza;
        int achilles;
    
    public:
    
        Creature();//default constructor
        ~Creature(){};//destructor
        Creature(double, int);//2-parameter constructor
        void setFuerza(double);//mutator
        double getFuerza();//getter
        void setAchilles(int);//mutator
        int getAchilles();//getter

        //Pure virtual function to perform the attack
        virtual double attacks (double attackRollScore, double defenseRollScore) = 0;
    
        //Method to perform the dice scores
        void diePlayer(int attacker, int defenser);
};
#endif

