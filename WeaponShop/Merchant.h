#pragma once
#include "Weapon.h"
#include <vector>
#include <string>
using namespace std;


class Merchant
{

private:
	string merchantName;
	string shopName;
	string description;
	string catchphrase;
	float money;
	WeaponType weapons;

	vector<Weapon>inventory;



public:
	Merchant();
	~Merchant();
	Merchant(string myName, string locationName, string myDescription, string myCatchphrase, float myMoney, WeaponType myWeapons);
	string GetCatchphrase();
	float GetMoney();
	void SetMoney(float newMoney);
	void AddWeapon(Weapon weapon);
	void Display();
	Weapon DisplayWeaponChoice(string weaponName);
	float Buy(Weapon weapon);

	//void Sell(Character& player, Weapon weapon);

};

