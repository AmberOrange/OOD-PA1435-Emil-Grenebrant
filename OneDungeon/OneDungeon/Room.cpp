#include "Room.h"

Room::Room()
{
	this->item = nullptr;
}

Room::~Room()
{
	delete this->enemy;
}

void Room::generate()
{
	int random = std::rand() % 100;
	if (random < 100)
	{
		this->enemy = new Monster();
		this->enemy->generate();
	}
	else
		this->enemy = nullptr;
	
	if (this->enemy != nullptr)
	{
		this->enemyDead = false;
	}
	else
	{
		this->enemyDead = true;
	}
	random = std::rand() % 100;

	if (random < 60)
		this->item = new Item("Potion", 100, ITEM::HPPOT, 0);
	else if (random < 80)
		this->item = new Item("Sword", 150, ITEM::WEAPON, 0);
	else if (random < 100)
		this->item = new Item("Armor", 80, ITEM::ARMOR, 0);
	else
		this->item = nullptr;
}

void Room::print()
{
}

void Room::setEnemyStatus(bool value)
{
	this->enemyDead = value;
}

Item* Room::getLoot()
{
	Item* ret = this->item;
	this->item = nullptr;
	return ret;
}

void Room::getRoomLoot()
{
}

Monster* Room::getMonster()
{
	if (this->enemyDead == false)
	{
		return this->enemy;
	}
	else 
	{
		return nullptr;
	}
}

bool Room::isMonsterDead()
{
	if (this->enemyDead)
		return true;
	return this->enemy->isMonsterDead();
}