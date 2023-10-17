#pragma once

#include <string>
using namespace std;


enum class WeaponType {

	BOW = 0,
	DAGGER = 1,
	STAFF = 2,
	SWORD = 3


};

class Weapon
{
private:

	string name;
	string description;
	int weight;
	int damages;
	float cost;
	float durability;
	WeaponType weaponUsed;


public:
	Weapon();
	Weapon(string weaponName, string weaponDescription,int weaponWeight, int weaponDamages, float weaponCost, float weaponDurability, WeaponType weapontype);
	void Use();

	string GetName();
	string GetDescription();
	int GetWeight();
	int GetDamages();
	float GetCost();
	float GetDurability();
	void GetWeaponType();
	void SetCost(float newCost);
	void SetName(string selectedWeapon);
	void SetDurability();
	
	~Weapon();

};


