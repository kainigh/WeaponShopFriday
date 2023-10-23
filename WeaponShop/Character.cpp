#include "Character.h"
#include "Merchant.h"
#include <iostream>

using namespace std;

Character::Character()
{
	fname = "John";
	lname = "Doe";
	catchphrase = "Bonjour";
	money = 100;
	life = 100;
	_weapon = Weapon();
	race = RaceType::HUMAN;
	classtype = ClassType::ARCHER;

}

Character::Character(string firstname, string lastname, string phrase, float characterMoney, int health, Weapon Weapon, RaceType Race, ClassType classOfCharacter)
{
	fname = firstname;
	lname = lastname;
	catchphrase = phrase;
	money = characterMoney;
	life = health;
	_weapon = Weapon;
	race = Race;
	classtype = classOfCharacter;


}

int Character::GetLifePoints()
{
	return life;
}

float Character::GetMoney()
{

	return money;

}

void Character::SetMoney(float newMoney)
{
	money = newMoney;
}

void Character::SetLifePoints(int lifePoints)
{
	life = lifePoints;

}

void Character::Intro()
{
	cout << "Hi my name is "<<fname<<" "<<lname << endl;
	cout << _weapon.GetDescription() << endl;
}

float Character::Buy(Merchant& merchant, Weapon weapon)
{
	float costOfWeaponBought;

	costOfWeaponBought = weapon.GetCost() * weapon.GetDurability();

	if (costOfWeaponBought > money)
	{
		cout << "You do not have enough money to purchase this item " << endl;
		cout << "You only have " << money << " on your account " << endl;

	}
	else
	{
		money -= costOfWeaponBought;

		cout << "You now have " << money << " left on your account!!" << endl;

		cout << "I had " << merchant.GetMoney() << endl;

		merchant.SetMoney(merchant.GetMoney() + costOfWeaponBought);

		cout << "Now I have " << merchant.GetMoney() << " added to my account!!!" << endl << endl;



	}


	return costOfWeaponBought;

}



void Character::Sell(Merchant& merchant, Weapon weapon)
{
	money += merchant.Buy(weapon);

	cout << "Player sold " << weapon.GetName() << " for " << merchant.Buy(weapon) << endl;
	cout << "Player now has " << money << endl;

	//cout << "Merchant now " << 

}

void Character::Use(Weapon weaponUsed, Character otherCharacter)
{
	
	otherCharacter.life -= 1;
	weaponUsed.SetDurability();

	cout << "Other Character Life: " << otherCharacter.life << endl;
	cout << "Weapon Durability is now " << weaponUsed.GetDurability() << endl;

	//_weapon.Use();

}

void Character::Loot(Character otherCharacter)
{
	//Check if otherCharacter life is less than or equal zero.
	//If life is less than or equal zero, add otherCharacter money and weapon the this Character

	if (otherCharacter.GetLifePoints() <= 0)
	{
		money += otherCharacter.GetMoney();
		


		cout << "Player looted " << otherCharacter.GetMoney() << " of money" << endl;
		cout << "Player now has " << money << " total money" << endl;

		otherCharacter.SetMoney(0);



	}
	else
	{
		cout << "You cannot loot this player. They are not dead. Their life is: " << otherCharacter.GetLifePoints() << endl;

	}


}

Character::~Character()
{

}
