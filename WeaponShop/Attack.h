#pragma once

#include <string>
#include "Weapon.h"
#include "Creature.h"

using namespace std;

class Attack
{

private:


	string name;
	//Weapon attackWeapon;
	int damagePoints;
	DamageType damage;
	int attackBonus;
	int points;



public:

	Attack();
	~Attack();

	int randomNumber();

};

