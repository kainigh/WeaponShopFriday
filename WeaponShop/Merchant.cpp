#include "Merchant.h"
#include "Weapon.h"
//#include "Character.h"

#include <iostream>
#include <string>

using namespace std;

Merchant::Merchant()
{
	merchantName = "Shopkeeper";
	shopName = "Weapns R Us";
	description = "";
	catchphrase = "Welcome to my shop..We have it all!";
	money = 100;
	weapons = WeaponType::SWORD;

}

string Merchant::GetCatchphrase()
{
	return catchphrase;

}

float Merchant::GetMoney()
{
	return money;

}

void Merchant::SetMoney(float newMoney)
{
	money = newMoney;
}


Merchant::Merchant(string myName, string locationName, string myDescription, string myCatchphrase, float myMoney, WeaponType myWeapons)
{

	merchantName = myName;
	shopName = locationName;
	description = myDescription;
	catchphrase = myCatchphrase;
	money = myMoney;
	weapons = myWeapons;

}

void Merchant::AddWeapon(Weapon weapon)
{

	inventory.push_back(weapon);

}

void Merchant::Display()
{
	unsigned int vecSize = inventory.size();

	for (unsigned int i = 0; i < vecSize; i++)
	{
		cout << "name: " << inventory[i].GetName() << endl;
		cout << "description: " << inventory[i].GetDescription() << endl;
		cout << "weight = " << inventory[i].GetWeight() << endl;
		cout << "cost = " << inventory[i].GetCost() << endl;
		cout << "damages = " << inventory[i].GetDamages() << endl;
		cout << "durability = " << inventory[i].GetDurability() << endl;

		inventory[i].GetWeaponType();


		cout << endl;


	}
	cout << endl;

}

Weapon Merchant::DisplayWeaponChoice(string weaponName)
{

	Weapon weaponChosen;

	unsigned int vecSize = inventory.size();

	for (unsigned int i = 0; i < vecSize; i++)
	{

		if (weaponName == inventory[i].GetName())
		{
			cout << "name: " << inventory[i].GetName() << endl;
			cout << "description: " << inventory[i].GetDescription() << endl;
			cout << "weight = " << inventory[i].GetWeight() << endl;
			cout << "cost = " << inventory[i].GetCost() << endl;
			cout << "damages = " << inventory[i].GetDamages() << endl;
			cout << "durability = " << inventory[i].GetDurability() << endl;

			inventory[i].GetWeaponType();

			cout << endl;

			weaponChosen = inventory[i];
			break;

		}
		/*
		else
		{
			cout << "I do not have " << weaponName << " in my inventory " << endl;

		}
		*/
			

	}

	

	return weaponChosen;



}


Merchant::~Merchant()
{
	

}

float Merchant::Buy(Weapon weapon)
{

	float costOfWeaponBought;

	costOfWeaponBought = weapon.GetCost() * weapon.GetDurability();

	return costOfWeaponBought;

}

/*
void Merchant::Sell(Character& player, Weapon weapon)
{

	int costOfWeaponSold;

	costOfWeaponSold = weapon.GetCost() + (0.2 * weapon.GetDurability());

	

}

*/


