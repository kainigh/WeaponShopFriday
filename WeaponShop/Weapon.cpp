#include "Weapon.h"
#include <iostream>

using namespace std;

Weapon::Weapon()
{
	name = "defaultweapon";
	description = "long, wooden";
	weight = 5;
	damages = 0;
	cost = 10.0f;
	durability = 1.0f;
	weaponUsed = WeaponType::STAFF;

}


Weapon::Weapon(string weaponName, string weaponDescription, int weaponWeight, int weaponDamages, float weaponCost, float weaponDurability, WeaponType weapontype)
{
	name = weaponName;
	description = weaponDescription;
	weight = weaponWeight;
	damages = weaponDamages;
	cost = weaponCost;
	durability = weaponDurability;
	weaponUsed = weapontype;


}

void Weapon::SetName(string selectedWeapon)
{

	name = selectedWeapon;

}


void Weapon::SetCost(float newCost)
{
	cost = newCost;
}

Weapon::~Weapon()
{



}

string Weapon::GetName()
{

	return name;
}

string Weapon::GetDescription()
{
	return description;
}

int Weapon::GetWeight()
{
	return weight;
}

int Weapon::GetDamages()
{
	return damages;
}

float Weapon::GetCost()
{
	return cost;
}

void Weapon::SetDurability()
{
	durability -= 0.05f;
}

void Weapon::Use()
{
	durability -= 0.05f;

}

float Weapon::GetDurability()
{
	return durability;
}

void Weapon::GetWeaponType()
{

	
	switch (weaponUsed)
	{

	case WeaponType::BOW:
		cout << "Weapon Type: BOW" << endl;
		break;


	case WeaponType::DAGGER:
		cout << "Weapon Type: DAGGER" << endl;
		break;


	case WeaponType::STAFF:
		cout << "Weapon Type: STAFF" << endl;
		break;


	case WeaponType::SWORD:
		cout << "Weapon Type: SWORD" << endl;
		break;


	default:
		cout << "No Weapon Type Selected" << endl;

	}

	

}
