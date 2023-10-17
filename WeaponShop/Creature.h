#pragma once

//#include "Attack.h"

#include <string>
#include <vector>

using namespace std;

enum class DamageType {

	BLUDGEONING,
	SLASHING,
	PIERCING,
	BURNING

};

class Creature
{

private:

	string name;
	string description;
	int healthPoints;
	int defenseScore;

	//vector<Attack>attacks;



public:
	Creature();
	~Creature();

};

