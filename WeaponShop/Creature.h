#pragma once

#include "Attack.h"

#include <string>
#include <vector>

using namespace std;



class Creature
{

private:

	string name;
	string description;
	int healthPoints;
	int defenseScore;

	vector<Attack>attacks;



public:
	Creature();
	Creature(string creatureName, string creatureDescription, int creatureHealth, int creatureDefenseScore);
	~Creature();
	int GetDefenseScore();
	void AttackCreature(Creature otherCreature);
	void Heal();

};

