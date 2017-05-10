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

IMonster* Room::getMonster(int pos)
{
	return nullptr;
}
