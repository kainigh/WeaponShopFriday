#pragma once
#include "Merchant.h"
#include "Weapon.h"
#include "Creature.h"
#include <string>
using namespace std;



	enum class RaceType{
		ELF,
		ORC,
		GOBLIN,
		HUMAN

	};




	enum class ClassType {
		ARCHER,
		WARRIOR,
		PRIEST,
		PALADIN

	};



class Character:Creature
{

private:

	string fname;
	string lname;
	string catchphrase;
	float money;
	int life;
	Weapon _weapon;
	RaceType race;
	ClassType classtype;


public:

	Character();
	Character(string firstname, string lastname, string phrase, float characterMoney, int health, Weapon weapon, RaceType race, ClassType classOfCharacter);
	~Character();
	void Intro();
	int GetLifePoints();
	void SetLifePoints(int lifePoints);
	float Buy(Merchant& merchant, Weapon weapon);
	void Sell(Merchant& merchant, Weapon weapon);
	void Use(Weapon weaponUsed, Character otherCharater);
	void Loot();

};

