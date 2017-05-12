#include "Player.h"



Player::Player()
{
	this->hp = 100;
	this->atkValue = 10;
	this->evValue = 20;
	this->dead = false;
}


void Player::create(Position startRoom)
{
	this->pos = startRoom;
	this->hp = PLAYER_START_HP;
	this->atkValue = PLAYER_BASE_ATK;
	this->defValue = PLAYER_BASE_DEF;
	this->dead = false;
}

int Player::getAttackValue()
{
	return this->atkValue;
}

int Player::getEvadeValue()
{
	return this->evValue;
}

bool Player::inflictDamage(int attackValue)
{
	this->hp -= attackValue;

	if (hp <= 0)
		this->dead = false;

	return dead;
}

void Player::setGear(IItem * item)
{
}

void Player::useItem(IItem* item)
{
	switch (item->getItemType())
	{

	case ITEM::ARMOR:
		this->defValue = item->getPower();
			break;

	case ITEM::WEAPON:
		this->atkValue = item->getPower();
		break;

	case ITEM::HPPOT:
		this->hp += item->getPower();
		break;

	default:
			break;
	}
}

bool Player::addLoot(IItem * item)
{
	return false;
}

Position Player::getPosition()
{
	return Position();
}

Position Player::setPosition(Position pos)
{
	return Position();
}

void Player::openInventory()
{
	std::string choice;

	this->inventory.display();

	do {
		// Get player input
		std::cout << "What would you like to do?" << std::endl;

		do {
			std::cin >> choice;
		} while (choice.find("Equip") == std::string::npos || choice.find("Use") == std::string::npos || choice.find("Exit") == std::string::npos);


		// Equip
		if (choice.find("Equip") != std::string::npos)
		{
			IItem* item = this->inventory.getItem(choice, 7);
			this->useItem(item);
		}

		// Use
		else if (choice.find("Use") != std::string::npos)
		{
			IItem* item = this->inventory.getItem(choice, 5);
			this->useItem(item);
		}

	} while (choice.find("Exit") == std::string::npos);	// Exit inventory
}
