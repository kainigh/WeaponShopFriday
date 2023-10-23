#pragma once

#include <string>
#include "Weapon.h"

using namespace std;

enum class DamageType {

	BLUDGEONING,
	SLASHING,
	PIERCING,
	BURNING

};


class Attack
{

private:
	string name;
	WeaponType attackWeapon;
	int damagePoints;
	DamageType damage;
	int attackBonus;
	



public:

	Attack();
	~Attack();
	Attack(string attackName, WeaponType weapon, int damages, DamageType damageType, int bonus);

	void randomNumber();
	void Resolve();

};

