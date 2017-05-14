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
	this->enemy = new Monster();
	this->enemy->generate();
	
	if (this->enemy != nullptr)
	{
		this->enemyAlive = true;
	}
	else
	{
		this->enemyAlive = false;
	}
}

void Room::print()
{
}

void Room::setEnemyAlive(bool value)
{
	this->enemyAlive = value;
}

IItem* Room::getLoot()
{
	return item;
}

void Room::getRoomLoot()
{
}

IMonster* Room::getMonster()
{
	if (this->enemyAlive == true)
	{
		return this->enemy;
	}
	else 
	{
		return nullptr;
	}
}
