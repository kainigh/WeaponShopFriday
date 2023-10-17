#include "Attack.h"
#include "Creature.h"
#include "Weapon.h"

Attack::Attack()
{
	name = "kick";
	//attackWeapon = WeaponType::SWORD;
	damagePoints = 0;
	damage = DamageType::BLUDGEONING;
	attackBonus = 5;
	points = 0;

}

int Attack::randomNumber()
{

	return points;
}



Attack::~Attack()
{


}
