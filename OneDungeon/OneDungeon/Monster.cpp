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


int Monster::getAttackValue()
{
	return this->atkValue;
}

bool Monster::inflictDamage(int attackValue)
{
	hp -= attackValue;

	if (hp <= 0)
		dead = true;

	std::cout << "\nYou hit the monster for " << attackValue << " damage!" << std::endl;

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

void Monster::displayHealth()
{
	std::cout << "\nMonster health: " << this->hp << std::endl;
}

void Monster::generate()
{
	this->hp = std::rand() % (MONSTER_HP_MAX - MONSTER_HP_MIN) + MONSTER_HP_MIN;
	this->atkValue = std::rand() % (MONSTER_ATK_MAX - MONSTER_ATK_MIN) + MONSTER_ATK_MIN;
	this->dead = false;
}
