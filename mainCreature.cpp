/***********************************************************
 ** Author: Carlos Carrillo                                *
 ** Date:   11/02/2015                                     *
 ** Description: This is the main fuction to implement the *
 *  Creature abstract base class.                          *
 **********************************************************/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "Creature.hpp"
#include "Barbarian.hpp"
#include "Reptile.hpp"
#include "Blue.hpp"
#include "Goblin.hpp"
#include "Shadow.hpp"

using namespace std;

int main ()
{
    std::string attacker;
    std::string defender;
    double strengthAttack;
    double strengthDefense;
    int choice1;
    int choice2;
    double fuerzaAttack;
    double fuerzaDefense;
    
    do
    {
        cout <<"\n\n***WELCOME TO CCC_FANTASY COMBAT GAME***"<<endl;
        
        cout<<"\n*PLEASE SELECT THE ATTACKER:*"<<endl;
        cout<< "Enter 1 to attack with BARBARIAN." <<endl;
        cout<< "Enter 2 to attack with REPTILE." <<endl;
        cout<< "Enter 3 to attack with BLUE MEN." <<endl;
        cout<< "Enter 4 to attack with GOBLIN." <<endl;
        cout<< "Enter 5 to attack with THE SHADOW." <<endl;
        
        //Prompt the user to enter an option from the menu
        cout << "Please enter your option: ";
        cin>>choice1; //take the input value
        cout <<endl;
        
        cout<<"\n*PLEASE SELECT THE RIVAL CREATURE:*"<<endl;
        cout<< "Enter 1 to fight against BARBARIAN." <<endl;
        cout<< "Enter 2 to fight against REPTILE." <<endl;
        cout<< "Enter 3 to fight against BLUE MEN." <<endl;
        cout<< "Enter 4 to fight against GOBLIN." <<endl;
        cout<< "Enter 5 to fight against THE SHADOW." <<endl;
        
        //Prompt the user to enter an option from the menu
        cout << "Please enter your option: ";
        cin>>choice2; //take the input value
        cout <<endl;
        
//BARBARIAN COMBINATIONS
        if(choice1 == 1 && choice2 == 1)
        {
            attacker = "BARBARIAN";
            defender = "BARBARIAN";
            strengthAttack = 12;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Barbarian myBarbarian1(strengthDefense, 1);
            myBarbarian1.diePlayer(1, 1);
            fuerzaDefense = myBarbarian1.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Barbarian myBarbarian2(strengthAttack, 1);
            myBarbarian2.diePlayer(1, 1);
            fuerzaAttack = myBarbarian2.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Barbarian myBarbarian1(strengthDefense, 1);
                myBarbarian1.diePlayer(1, 1);
                fuerzaDefense = myBarbarian1.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Barbarian myBarbarian2(strengthAttack, 1);
                myBarbarian2.diePlayer(1, 1);
                fuerzaAttack = myBarbarian2.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Barbarian myBarbarian1(strengthDefense, 1);
                            myBarbarian1.diePlayer(1, 1);
                            fuerzaDefense = myBarbarian1.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Barbarian myBarbarian2(strengthAttack, 1);
                            myBarbarian2.diePlayer(1, 1);
                            fuerzaAttack = myBarbarian2.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                        
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2 && key !=3);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }

/////////////////////////////////////////////////////////////////
        
        if(choice1 == 2 && choice2 == 1)
        {
            attacker = "REPTILE";
            defender = "BARBARIAN";
            strengthAttack = 18;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Barbarian myBarbarian(strengthDefense, 1);
            myBarbarian.diePlayer(2, 1);
            fuerzaDefense = myBarbarian.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Reptile myReptile(strengthAttack, 1);
            myReptile.diePlayer(1, 2);
            fuerzaAttack = myReptile.getFuerza();
            
            
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
           
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                 {
                    return 0;
                 }
                
                if(door1 != 1 && door1 != 2)
                 {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                 }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Barbarian myBarbarian(strengthDefense, 1);
                myBarbarian.diePlayer(2, 1);
                fuerzaDefense = myBarbarian.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Reptile myReptile(strengthAttack, 1);
                myReptile.diePlayer(1, 2);
                fuerzaAttack = myReptile.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            strengthDefense = fuerzaDefense;
                            Barbarian myBarbarian(strengthDefense, 1);
                            myBarbarian.diePlayer(2, 1);
                            fuerzaDefense = myBarbarian.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Reptile myReptile(strengthAttack, 1);
                            myReptile.diePlayer(1, 2);
                            fuerzaAttack = myReptile.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 3 && choice2 == 1)
        {
            attacker = "BLUE_MEN";
            defender = "BARBARIAN";
            strengthAttack = 12;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Barbarian myBarbarian(strengthDefense, 1);
            myBarbarian.diePlayer(3, 1);
            fuerzaDefense = myBarbarian.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Blue myBlue(strengthAttack, 1);
            myBlue.diePlayer(1, 3);
            fuerzaAttack = myBlue.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Barbarian myBarbarian(strengthDefense, 1);
                myBarbarian.diePlayer(3, 1);
                fuerzaDefense = myBarbarian.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
               
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Blue myBlue(strengthAttack, 1);
                myBlue.diePlayer(1, 3);
                fuerzaAttack = myBlue.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            strengthDefense = fuerzaDefense;
                            Barbarian myBarbarian(strengthDefense, 1);
                            myBarbarian.diePlayer(3, 1);
                            fuerzaDefense = myBarbarian.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Blue myBlue(strengthAttack, 1);
                            myBlue.diePlayer(1, 3);
                            fuerzaAttack = myBlue.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 4 && choice2 == 1)
        {
            attacker = "GOBLIN";
            defender = "BARBARIAN";
            strengthAttack = 8;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Barbarian myBarbarian(strengthDefense, 1);
            myBarbarian.diePlayer(4, 1);
            fuerzaDefense = myBarbarian.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Goblin myGoblin(strengthAttack, 1);
            myGoblin.diePlayer(1, 4);
            fuerzaAttack = myGoblin.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Barbarian myBarbarian(strengthDefense, 1);
                myBarbarian.diePlayer(4, 1);
                fuerzaDefense = myBarbarian.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Goblin myGoblin(strengthAttack, 1);
                myGoblin.diePlayer(1, 4);
                fuerzaAttack = myGoblin.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Barbarian myBarbarian(strengthDefense, 1);
                            myBarbarian.diePlayer(4, 1);
                            fuerzaDefense = myBarbarian.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Goblin myGoblin(strengthAttack, 1);
                            myGoblin.diePlayer(1, 4);
                            fuerzaAttack = myGoblin.getFuerza();

                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 5 && choice2 == 1)
        {
            attacker = "SHADOW";
            defender = "BARBARIAN";
            strengthAttack = 12;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Barbarian myBarbarian(strengthDefense, 1);
            myBarbarian.diePlayer(5, 1);
            fuerzaDefense = myBarbarian.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Shadow myShadow(strengthAttack, 1);
            myShadow.diePlayer(1, 5);
            fuerzaAttack = myShadow.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Barbarian myBarbarian(strengthDefense, 1);
                myBarbarian.diePlayer(5, 1);
                fuerzaDefense = myBarbarian.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Shadow myShadow(strengthAttack, 1);
                myShadow.diePlayer(1, 5);
                fuerzaAttack = myShadow.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Barbarian myBarbarian(strengthDefense, 1);
                            myBarbarian.diePlayer(5, 1);
                            fuerzaDefense = myBarbarian.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Shadow myShadow(strengthAttack, 1);
                            myShadow.diePlayer(1, 5);
                            fuerzaAttack = myShadow.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////

        
//REPTILE COMBINATIONS
        if(choice1 == 1 && choice2 == 2)
        {
            attacker = "BARBARIAN";
            defender = "REPTILE";
            strengthAttack = 12;
            strengthDefense = 18;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Reptile myReptile(strengthDefense, 1);
            myReptile.diePlayer(1, 2);
            fuerzaDefense = myReptile.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Barbarian myBarbarian(strengthAttack, 1);
            myBarbarian.diePlayer(2, 1);
            fuerzaAttack = myBarbarian.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                strengthDefense = fuerzaDefense;
                Reptile myReptile(strengthDefense, 1);
                myReptile.diePlayer(1, 2);
                fuerzaDefense = myReptile.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Barbarian myBarbarian(strengthAttack, 1);
                myBarbarian.diePlayer(2, 1);
                fuerzaAttack = myBarbarian.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Reptile myReptile(strengthDefense, 1);
                            myReptile.diePlayer(1, 2);
                            fuerzaDefense = myReptile.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Barbarian myBarbarian(strengthAttack, 1);
                            myBarbarian.diePlayer(2, 1);
                            fuerzaAttack = myBarbarian.getFuerza();

                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 2 && choice2 == 2)
        {
            attacker = "REPTILE";
            defender = "REPTILE";
            strengthAttack = 18;
            strengthDefense = 18;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Reptile myReptile1(strengthDefense, 1);
            myReptile1.diePlayer(2, 2);
            fuerzaDefense = myReptile1.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Reptile myReptile(strengthAttack, 1);
            myReptile.diePlayer(2, 2);
            fuerzaAttack = myReptile.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Reptile myReptile1(strengthDefense, 1);
                myReptile1.diePlayer(2, 2);
                fuerzaDefense = myReptile1.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Reptile myReptile(strengthAttack, 1);
                myReptile.diePlayer(2, 2);
                fuerzaAttack = myReptile.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Reptile myReptile1(strengthDefense, 1);
                            myReptile1.diePlayer(2, 2);
                            fuerzaDefense = myReptile1.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Reptile myReptile(strengthAttack, 1);
                            myReptile.diePlayer(2, 2);
                            fuerzaAttack = myReptile.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 3 && choice2 == 2)
        {
            attacker = "BLUE_MEN";
            defender = "REPTILE";
            strengthAttack = 12;
            strengthDefense = 18;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Reptile myReptile(strengthDefense, 1);
            myReptile.diePlayer(3, 2);
            fuerzaDefense = myReptile.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            Blue myBlue(strengthAttack, 1);
            myBlue.diePlayer(2, 3);
            fuerzaAttack = myBlue.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Reptile myReptile(strengthDefense, 1);
                myReptile.diePlayer(3, 2);
                fuerzaDefense = myReptile.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
              
                strengthAttack = fuerzaAttack;
                Blue myBlue(strengthAttack, 1);
                myBlue.diePlayer(2, 3);
                fuerzaAttack = myBlue.getFuerza();
                
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Reptile myReptile(strengthDefense, 1);
                            myReptile.diePlayer(3, 2);
                            fuerzaDefense = myReptile.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Blue myBlue(strengthAttack, 1);
                            myBlue.diePlayer(2, 3);
                            fuerzaAttack = myBlue.getFuerza();
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 4 && choice2 == 2)
        {
            attacker = "GOBLIN";
            defender = "REPTILE";
            strengthAttack = 8;
            strengthDefense = 18;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Reptile myReptile(strengthDefense, 1);
            myReptile.diePlayer(4, 2);
            fuerzaDefense = myReptile.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
                {
                    break;
                }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Goblin myGoblin(strengthAttack, 1);
            myGoblin.diePlayer(2, 4);
            fuerzaAttack = myGoblin.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Reptile myReptile(strengthDefense, 1);
                myReptile.diePlayer(4, 2);
                fuerzaDefense = myReptile.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Goblin myGoblin(strengthAttack, 1);
                myGoblin.diePlayer(2, 4);
                fuerzaAttack = myGoblin.getFuerza();
               
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Reptile myReptile(strengthDefense, 1);
                            myReptile.diePlayer(4, 2);
                            fuerzaDefense = myReptile.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Goblin myGoblin(strengthAttack, 1);
                            myGoblin.diePlayer(2, 4);
                            fuerzaAttack = myGoblin.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 5 && choice2 == 2)
        {
            attacker = "SHADOW";
            defender = "REPTILE";
            strengthAttack = 12;
            strengthDefense = 18;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Reptile myReptile(strengthDefense, 1);
            myReptile.diePlayer(5, 2);
            fuerzaDefense = myReptile.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Shadow myShadow(strengthAttack, 1);
            myShadow.diePlayer(2, 5);
            fuerzaAttack = myShadow.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Reptile myReptile(strengthDefense, 1);
                myReptile.diePlayer(5, 2);
                fuerzaDefense = myReptile.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Shadow myShadow(strengthAttack, 1);
                myShadow.diePlayer(2, 5);
                fuerzaAttack = myShadow.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Reptile myReptile(strengthDefense, 1);
                            myReptile.diePlayer(5, 2);
                            fuerzaDefense = myReptile.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Shadow myShadow(strengthAttack, 1);
                            myShadow.diePlayer(2, 5);
                            fuerzaAttack = myShadow.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
//BLUE MEN COMBINATIONS
        if(choice1 == 1 && choice2 == 3)
        {
            attacker = "Blue";
            defender = "BLUE_MEN";
            strengthAttack = 12;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Blue myBlue(strengthDefense, 1);
            myBlue.diePlayer(1, 3);
            fuerzaDefense = myBlue.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Reptile myBarbarian(strengthAttack, 1);
            myBarbarian.diePlayer(3, 1);
            fuerzaAttack = myBarbarian.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Blue myBlue(strengthDefense, 1);
                myBarbarian.diePlayer(1, 3);
                fuerzaDefense = myBlue.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Barbarian myBarbarian(strengthAttack, 1);
                myBarbarian.diePlayer(3, 1);
                fuerzaAttack = myBarbarian.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Blue myBlue(strengthDefense, 1);
                            myBlue.diePlayer(1, 3);
                            fuerzaDefense = myBlue.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Barbarian myBarbarian(strengthAttack, 1);
                            myBarbarian.diePlayer(3, 1);
                            fuerzaAttack = myBarbarian.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 2 && choice2 == 3)
        {
            attacker = "REPTILE";
            defender = "BLUE_MEN";
            strengthAttack = 18;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Blue myBlue(strengthDefense, 1);
            myBlue.diePlayer(2, 3);
            fuerzaDefense = myBlue.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Reptile myReptile(strengthAttack, 1);
            myReptile.diePlayer(3, 2);
            fuerzaAttack = myReptile.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Blue myBlue(strengthDefense, 1);
                myReptile.diePlayer(2, 3);
                fuerzaDefense = myBlue.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Reptile myReptile(strengthAttack, 1);
                myReptile.diePlayer(3, 2);
                fuerzaAttack = myReptile.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Blue myBlue(strengthDefense, 1);
                            myBlue.diePlayer(2, 3);
                            fuerzaDefense = myBlue.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Reptile myReptile(strengthAttack, 1);
                            myReptile.diePlayer(3, 2);
                            fuerzaAttack = myReptile.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 3 && choice2 == 3)
        {
            attacker = "BLUE_MEN";
            defender = "BLUE_MEN";
            strengthAttack = 12;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Blue myBlue(strengthDefense, 1);
            myBlue.diePlayer(3, 3);
            fuerzaDefense = myBlue.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Blue myBlue1(strengthAttack, 1);
            myBlue1.diePlayer(3, 3);
            fuerzaAttack = myBlue1.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Blue myBlue(strengthDefense, 1);
                myBlue.diePlayer(3, 3);
                fuerzaDefense = myBlue.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Blue myBlue1(strengthAttack, 1);
                myBlue1.diePlayer(3, 3);
                fuerzaAttack = myBlue1.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Blue myBlue(strengthDefense, 1);
                            myBlue.diePlayer(3, 3);
                            fuerzaDefense = myBlue.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Blue myBlue1(strengthAttack, 1);
                            myBlue1.diePlayer(3, 3);
                            fuerzaAttack = myBlue1.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 4 && choice2 == 3)
        {
            attacker = "GOBLIN";
            defender = "BLUE_MEN";
            strengthAttack = 8;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Blue myBlue(strengthDefense, 1);
            myBlue.diePlayer(4, 3);
            fuerzaDefense = myBlue.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Goblin myGoblin(strengthAttack, 1);
            myGoblin.diePlayer(3, 4);
            fuerzaAttack = myGoblin.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Blue myBlue(strengthDefense, 1);
                myGoblin.diePlayer(4, 3);
                fuerzaDefense = myBlue.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Goblin myGoblin(strengthAttack, 1);
                myGoblin.diePlayer(3, 4);
                fuerzaAttack = myGoblin.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Blue myBlue(strengthDefense, 1);
                            myBlue.diePlayer(4, 3);
                            fuerzaDefense = myBlue.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Goblin myGoblin(strengthAttack, 1);
                            myGoblin.diePlayer(3, 4);
                            fuerzaAttack = myGoblin.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 5 && choice2 == 3)
        {
            attacker = "SHADOW";
            defender = "BLUE_MEN";
            strengthAttack = 12;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Blue myBlue(strengthDefense, 1);
            myBlue.diePlayer(5, 3);
            fuerzaDefense = myBlue.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Shadow myShadow(strengthAttack, 1);
            myShadow.diePlayer(3, 5);
            fuerzaAttack = myShadow.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Blue myBlue(strengthDefense, 1);
                myShadow.diePlayer(5, 3);
                fuerzaDefense = myBlue.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Shadow myShadow(strengthAttack, 1);
                myShadow.diePlayer(3, 5);
                fuerzaAttack = myShadow.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Blue myBlue(strengthDefense, 1);
                            myBlue.diePlayer(5, 3);
                            fuerzaDefense = myBlue.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Shadow myShadow(strengthAttack, 1);
                            myShadow.diePlayer(3, 5);
                            fuerzaAttack = myShadow.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
//GOBLIN COMBINATIONS
        if(choice1 == 1 && choice2 == 4)
        {
            attacker = "BARBARIAN";
            defender = "GOBLIN";
            strengthAttack = 12;
            strengthDefense = 8;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Goblin myGoblin(strengthDefense, 1);
            myGoblin.diePlayer(1, 4);
            fuerzaDefense = myGoblin.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Barbarian myBarbarian(strengthAttack, 1);
            myBarbarian.diePlayer(4, 1);
            fuerzaAttack = myBarbarian.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Goblin myGoblin(strengthDefense, 1);
                myGoblin.diePlayer(1, 4);
                fuerzaDefense = myGoblin.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Barbarian myBarbarian(strengthAttack, 1);
                myBarbarian.diePlayer(4, 1);
                fuerzaAttack = myBarbarian.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Goblin myGoblin(strengthDefense, 1);
                            myGoblin.diePlayer(1, 4);
                            fuerzaDefense = myGoblin.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Barbarian myBarbarian(strengthAttack, 1);
                            myBarbarian.diePlayer(4, 1);
                            fuerzaAttack = myBarbarian.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 2 && choice2 == 4)
        {
            attacker = "REPTILE";
            defender = "GOBLIN";
            strengthAttack = 18;
            strengthDefense = 8;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Goblin myGoblin(strengthDefense, 1);
            myGoblin.diePlayer(2, 4);
            fuerzaDefense = myGoblin.getFuerza();
            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Reptile myReptile(strengthAttack, 1);
            myReptile.diePlayer(4, 2);
            fuerzaAttack = myReptile.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Goblin myGoblin(strengthDefense, 1);
                myGoblin.diePlayer(2, 4);
                fuerzaDefense = myGoblin.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Reptile myReptile(strengthAttack, 1);
                myReptile.diePlayer(4, 2);
                fuerzaAttack = myReptile.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Goblin myGoblin(strengthDefense, 1);
                            myReptile.diePlayer(2, 4);
                            fuerzaDefense = myGoblin.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Reptile myReptile(strengthAttack, 1);
                            myReptile.diePlayer(4, 2);
                            fuerzaAttack = myReptile.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 3 && choice2 == 4)
        {
            attacker = "BLUE_MEN";
            defender = "GOBLIN";
            strengthAttack = 12;
            strengthDefense = 8;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Goblin myGoblin(strengthDefense, 1);
            myGoblin.diePlayer(3, 4);
            fuerzaDefense = myGoblin.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Blue myBlue(strengthAttack, 1);
            myBlue.diePlayer(4, 3);
            fuerzaAttack = myBlue.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Goblin myGoblin(strengthDefense, 1);
                myGoblin.diePlayer(3, 4);
                fuerzaDefense = myGoblin.getFuerza();
                system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Blue myBlue(strengthAttack, 1);
                myBlue.diePlayer(4, 3);
                fuerzaAttack = myBlue.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Goblin myGoblin(strengthDefense, 1);
                            myBlue.diePlayer(3, 4);
                            fuerzaDefense = myGoblin.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Blue myBlue(strengthAttack, 1);
                            myBlue.diePlayer(4, 3);
                            fuerzaAttack = myBlue.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
/////////////////////////////////////////////////////////////////
        
        if(choice1 == 4 && choice2 == 4)
        {
            attacker = "GOBLIN";
            defender = "GOBLIN";
            strengthAttack = 8;
            strengthDefense = 8;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Goblin myGoblin(strengthDefense, 1);
            myGoblin.diePlayer(4, 4);
            fuerzaDefense = myGoblin.getFuerza();
            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Goblin myGoblin1(strengthAttack, 1);
            myGoblin1.diePlayer(4, 4);
            fuerzaAttack = myGoblin1.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Goblin myGoblin(strengthDefense, 1);
                myGoblin.diePlayer(4, 4);
                fuerzaDefense = myGoblin.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Goblin myGoblin1(strengthAttack, 1);
                myGoblin1.diePlayer(4, 4);
                fuerzaAttack = myGoblin1.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Goblin myGoblin(strengthDefense, 1);
                            myGoblin.diePlayer(4, 4);
                            fuerzaDefense = myGoblin.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Goblin myGoblin1(strengthAttack, 1);
                            myGoblin1.diePlayer(4, 4);
                            fuerzaAttack = myGoblin1.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
////////////////////////////////////////////////
        
        if(choice1 == 5 && choice2 == 4)
        {
            attacker = "SHADOW";
            defender = "GOBLIN";
            strengthAttack = 12;
            strengthDefense = 8;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Goblin myGoblin(strengthDefense, 1);
            myGoblin.diePlayer(5, 4);
            fuerzaDefense = myGoblin.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Shadow myShadow(strengthAttack, 1);
            myShadow.diePlayer(4, 5);
            fuerzaAttack = myShadow.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Goblin myGoblin(strengthDefense, 1);
                myGoblin.diePlayer(5, 4);
                fuerzaDefense = myGoblin.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Shadow myShadow(strengthAttack, 1);
                myShadow.diePlayer(4, 5);
                fuerzaAttack = myShadow.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Goblin myGoblin(strengthDefense, 1);
                            myGoblin.diePlayer(5, 4);
                            fuerzaDefense = myGoblin.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Shadow myShadow(strengthAttack, 1);
                            myShadow.diePlayer(4, 5);
                            fuerzaAttack = myShadow.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
////////////////////////////////////////////////
        
//SHADOW COMBINATIONS
        if(choice1 == 1 && choice2 == 5)
        {
            attacker = "BARBARIAN";
            defender = "SHADOW";
            strengthAttack = 12;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Shadow myShadow(strengthDefense, 1);
            myShadow.diePlayer(1, 5);
            fuerzaDefense = myShadow.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Barbarian myBarbarian(strengthAttack, 1);
            myBarbarian.diePlayer(5, 1);
            fuerzaAttack = myBarbarian.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Shadow myShadow(strengthDefense, 1);
                myShadow.diePlayer(1, 5);
                fuerzaDefense = myShadow.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Barbarian myBarbarian(strengthAttack, 1);
                myBarbarian.diePlayer(5, 1);
                fuerzaAttack = myBarbarian.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Shadow myShadow(strengthDefense, 1);
                            myShadow.diePlayer(1, 5);
                            fuerzaDefense = myShadow.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Barbarian myBarbarian(strengthAttack, 1);
                            myBarbarian.diePlayer(5, 1);
                            fuerzaAttack = myBarbarian.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
////////////////////////////////////////////////
        
        if(choice1 == 2 && choice2 == 5)
        {
            attacker = "REPTILE";
            defender = "SHADOW";
            strengthAttack = 18;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Shadow myShadow(strengthDefense, 1);
            myShadow.diePlayer(2, 5);
            fuerzaDefense = myShadow.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Reptile myReptile(strengthAttack, 1);
            myReptile.diePlayer(5, 2);
            fuerzaAttack = myReptile.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Shadow myShadow(strengthDefense, 1);
                myShadow.diePlayer(2, 5);
                fuerzaDefense = myShadow.getFuerza();
                system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Reptile myReptile(strengthAttack, 1);
                myReptile.diePlayer(5, 2);
                fuerzaAttack = myReptile.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Shadow myShadow(strengthDefense, 1);
                            myShadow.diePlayer(2, 5);
                            fuerzaDefense = myShadow.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Reptile myReptile(strengthAttack, 1);
                            myReptile.diePlayer(5, 2);
                            fuerzaAttack = myReptile.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
////////////////////////////////////////////////
        
        if(choice1 == 3 && choice2 == 5)
        {
            attacker = "BLUE_MEN";
            defender = "SHADOW";
            strengthAttack = 12;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Shadow myShadow(strengthDefense, 1);
            myShadow.diePlayer(3, 5);
            fuerzaDefense = myShadow.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Blue myBlue(strengthAttack, 1);
            myBlue.diePlayer(5, 3);
            fuerzaAttack = myBlue.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Shadow myShadow(strengthDefense, 1);
                myShadow.diePlayer(3, 5);
                fuerzaDefense = myShadow.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Blue myBlue(strengthAttack, 1);
                myBlue.diePlayer(5, 3);
                fuerzaAttack = myBlue.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Shadow myShadow(strengthDefense, 1);
                            myShadow.diePlayer(3, 5);
                            fuerzaDefense = myShadow.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Blue myBlue(strengthAttack, 1);
                            myBlue.diePlayer(5, 3);
                            fuerzaAttack = myBlue.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
////////////////////////////////////////////////
        
        if(choice1 == 4 && choice2 == 5)
        {
            attacker = "GOBLIN";
            defender = "SHADOW";
            strengthAttack = 8;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Shadow myShadow(strengthDefense, 1);
            myShadow.diePlayer(4, 5);
            fuerzaDefense = myShadow.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Goblin myGoblin(strengthAttack, 1);
            myGoblin.diePlayer(5, 4);
            fuerzaAttack = myGoblin.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Shadow myShadow(strengthDefense, 1);
                myShadow.diePlayer(4, 5);
                fuerzaDefense = myShadow.getFuerza();
                system("sleep .5");
                if(fuerzaDefense < 1)
                {
                    break;
                }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Goblin myGoblin(strengthAttack, 1);
                myGoblin.diePlayer(5, 4);
                fuerzaAttack = myGoblin.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Shadow myShadow(strengthDefense, 1);
                            myShadow.diePlayer(4, 5);
                            fuerzaDefense = myShadow.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Goblin myGoblin(strengthAttack, 1);
                            myGoblin.diePlayer(5, 4);
                            fuerzaAttack = myGoblin.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
        
////////////////////////////////////////////////
        
        if(choice1 == 5 && choice2 == 5)
        {
            attacker = "SHADOW";
            defender = "SHADOW";
            strengthAttack = 12;
            strengthDefense = 12;
            
            //very first attack
            cout <<"**ATTACK RESUME # 1**"<<endl;
            Shadow myShadow(strengthDefense, 1);
            myShadow.diePlayer(5, 5);
            fuerzaDefense = myShadow.getFuerza();
            system("sleep .5");
            if(fuerzaDefense < 1)
            {
                break;
            }
            
            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
            
            Shadow myShadow1(strengthAttack, 1);
            myShadow1.diePlayer(5, 5);
            fuerzaAttack = myShadow1.getFuerza();
            
            cout <<"**END OF FIGHT # 1**\n"<<endl;
            
            cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
            
            int door1;
            do
            {
                cout << "Enter 1 for NEXT COMBAT. "<<endl;
                cout << "Enter 2 to EXIT the game. "<<endl;
                cin >> door1;
                
                if(door1 == 2)
                {
                    return 0;
                }
                
                if(door1 != 1 && door1 != 2)
                {
                    cout<<"Sorry! Wrong input. Try again!!"<<endl;
                    return 0;
                }
                
            }while(door1 != 1);
            
            int counter1 = 1;
            int counter2 = 0;
            
            do
            {
                counter1++;
                cout <<"\n**ATTACK RESUME # "<<counter1<<"**"<<endl;
                
                strengthDefense = fuerzaDefense;
                Shadow myShadow(strengthDefense, 1);
                myShadow.diePlayer(5, 5);
                fuerzaDefense = myShadow.getFuerza();
                system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                
                cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                
                strengthAttack = fuerzaAttack;
                Shadow myShadow1(strengthAttack, 1);
                myShadow1.diePlayer(5, 5);
                fuerzaAttack = myShadow1.getFuerza();
                
                cout <<"**END OF FIGHT # "<<counter1<<"**\n"<<endl;
                cout << "**YOU CAN CONTINUE THE FIGHT UNTIL ONE OF THE WARRIOR DIES!!**\n"<<endl;
                
                int key = 0;
                do
                {
                    cout << "Enter 1 for NEXT COMBAT. "<<endl;
                    cout << "Enter 2 to automatically finish this combat to DEATH!!"<<endl;
                    cout << "Enter 3 to EXIT. "<<endl;
                    cin>>key;
                    
                    if(key == 2)
                    {
                        counter2 = counter1;
                        
                        do
                        {
                            counter2++;
                            cout <<"\n**ATTACK RESUME # "<<counter2<<"**"<<endl;
                            
                            strengthDefense = fuerzaDefense;
                            Shadow myShadow(strengthDefense, 1);
                            myShadow.diePlayer(5, 5);
                            fuerzaDefense = myShadow.getFuerza();
                            system("sleep .5");
                            if(fuerzaDefense < 1)
                            {
                                break;
                            }
                            
                            cout <<"**"<<defender<<"'S RESPONSE**"<<endl;
                            
                            strengthAttack = fuerzaAttack;
                            Shadow myShadow1(strengthAttack, 1);
                            myShadow1.diePlayer(5, 5);
                            fuerzaAttack = myShadow1.getFuerza();
                            
                            cout <<"**END OF FIGHT # "<<counter2<<"**\n"<<endl;
                            
                            system("sleep 1.0");
                            
                        }while(fuerzaDefense > 0 && fuerzaAttack > 0);
                    }
                    
                    if(key == 3)
                    {
                        return 0;
                    }
                    
                }while(key != 1 && key !=2);
                
            }while(fuerzaDefense > 0 && fuerzaAttack > 0);
        }
    
    
        char door;
        do
        {
            cout <<"\nOne of the warriors has died..."<<endl;
            cout <<"Would you like to start a NEW COMBAT? (y/n)... ";
            cin>>door;
            
            if(door == 'n')
            {
                return 0;
            }
            
        }while(door != 'y');
        
    }while(choice1);
    
    return 0;
}

        
    


