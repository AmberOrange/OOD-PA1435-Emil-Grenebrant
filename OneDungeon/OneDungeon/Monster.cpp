#include "Monster.h"

Monster::Monster()
{
}

void Monster::generate()
{
	this->hp = std::rand() % (MONSTER_HP_MAX - MONSTER_HP_MIN) + MONSTER_HP_MIN;
	this->atkValue = std::rand() % (MONSTER_ATK_MAX - MONSTER_ATK_MIN) + MONSTER_ATK_MIN;
	this->dead = false;
}

int Monster::getAttackValue()
{
	return 0;
}

bool Monster::inflictDamage(int attackValue)
{
	return false;
}

bool Monster::calcEvade(int evadeValue)
{
	return false;
}
