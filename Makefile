#Author: Carlos Carrillo
#Date:   11/03/2015
#Description: This is the makefile for Assignment_3

#This target will compile the entire program

All: total

total:	mainCreature.o Creature.o Barbarian.o Reptile.o Blue.o Goblin.o Shadow.o
	g++ mainCreature.o Creature.o Barbarian.o Reptile.o Blue.o Goblin.o Shadow.o -o creature

mainCreature.o: mainCreature.cpp
	g++ -c mainCreature.cpp

Creature.o: Creature.cpp
	g++ -c Creature.cpp

Barbarian.o: Barbarian.cpp
	g++ -c Barbarian.cpp

Reptile.o: Reptile.cpp
	g++ -c Reptile.cpp

Blue.o: Blue.cpp
	g++ -c Blue.cpp

Goblin.o: Goblin.cpp
	g++ -c Goblin.cpp

Shadow.o: Shadow.cpp
	g++ -c Shadow.cpp

clean:
	rm -rf *o total