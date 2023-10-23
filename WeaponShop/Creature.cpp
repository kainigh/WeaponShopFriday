#include "Creature.h"
#include "Attack.h"


Creature::Creature()
{
	name = "Panther";
	description = "Runs fast";
	healthPoints = 100;
	defenseScore = 10;

	
}

Creature::Creature(string creatureName, string creatureDescription, int creatureHealth, int creatureDefenseScore)
{
	name = creatureName;
	description = creatureDescription;
	healthPoints = creatureHealth;
	defenseScore = creatureDefenseScore;
}

Creature::~Creature()
{


}

int Creature::GetDefenseScore()
{

	return defenseScore;

}


void Creature::AttackCreature(Creature otherCreature)
{



}

void Creature::Heal()
{
	healthPoints += 10;
}