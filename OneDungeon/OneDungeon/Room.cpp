#include "Room.h"

Room::Room()
{
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

IItem* Room::getLoot()
{
	return nullptr;
}

void Room::getRoomLoot()
{
}

IMonster* Room::getMonster()
{
	return this->enemy;
}
