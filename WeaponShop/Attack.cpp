#include "Attack.h"
#include "Creature.h"
#include "Weapon.h"

#include <iostream>

using namespace std;



Attack::Attack()
{
	name = "kick";
	attackWeapon = WeaponType::SWORD;
	damagePoints = 0;
	damage = DamageType::BLUDGEONING;
	attackBonus = 5;
	


}

 Attack::Attack(string attackName, WeaponType weapon, int damages, DamageType damageType, int bonus)
{
	name = attackName;
	attackWeapon = weapon;
	damagePoints = damages;
	damage = damageType;
	attackBonus = bonus;
}


void Attack::randomNumber()
{
	Creature creature;

	srand((unsigned) time(NULL));

	int random = 1 + (rand() % 20);

	cout << "The random number is: " << random << endl;

	int randomNumAndBonus = attackBonus + random;

	if (randomNumAndBonus >= creature.GetDefenseScore())
	{
		cout << "The attack can do damages " << endl;

	}

	
}

void Attack::Resolve()
{
	//determine if it hits or misses and inflict damages

}



Attack::~Attack()
{


}
