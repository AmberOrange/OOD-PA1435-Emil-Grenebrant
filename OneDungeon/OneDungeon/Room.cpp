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
	if (random < 50)
	{
		this->enemy = new Monster();
		this->enemy->generate();
	}
	else
		this->enemy = nullptr;
	
	if (this->enemy != nullptr)
	{
		this->enemyAlive = true;
	}
	else
	{
		this->enemyAlive = false;
	}
	random = std::rand() % 200;

	if (random < 60)
		this->item = new Item("Potion of Health", 100, ITEM::HPPOT, 0);
	else if (random < 80)
		this->item = new Item("Sword of a Thousand Truths", 50, ITEM::WEAPON, 0);
	else if (random < 100)
		this->item = new Item("Super strong Armor", 80, ITEM::ARMOR, 0);
	else
		this->item = nullptr;
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
