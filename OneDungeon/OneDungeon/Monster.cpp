#include "Monster.h"



Monster::Monster()
{
	this->hp = 30;
	this->atkValue = 5;
	this->speed = 5;
	this->dead = false;
	std::srand(time(nullptr));
}

Monster::~Monster()
{
}

void Monster::generate()
{
}

int Monster::getAttackValue()
{
	return this->atkValue;
}

bool Monster::inflictDamage(int attackValue)
{
	hp -= attackValue;

	if (hp <= 0)
		dead = true;

	return dead;
}

bool Monster::calcEvade(int evadeValue)
{
	bool evaded = false;

	int evChance = (int)evadeValue / this->speed;

	int result = std::rand() % 100 + evChance;

	if (result >= 100)
		evaded = true;

	return evaded;
}
