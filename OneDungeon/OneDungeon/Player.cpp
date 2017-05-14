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

	std::cout << "\nThe monster bit you for " << attackValue << " damage!" << std::endl;

	if (this->dead)
		std::cout << "\nYou died!" << std::endl;

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
		std::cout << "Defense value changed by " << item->getPower() - this->defValue << " to " << item->getPower() << std::endl;
		this->defValue = item->getPower();
			break;

	case ITEM::WEAPON:
		std::cout << "Attack value changed by " << item->getPower() - this->atkValue << " to " << item->getPower() << std::endl;
		this->atkValue = item->getPower();
		break;

	case ITEM::HPPOT:
		this->hp += item->getPower();
		std::cout << "Health value increased by " << item->getPower() << " to " << this->hp << std::endl;
		break;

	default:
			break;
	}
}

void Player::displayHealth()
{
	std::cout << "\nPlayer health: " << this->hp << std::endl;
}

bool Player::addLoot(IItem * item)
{
	return false;
}

bool Player::isPlayerDead()
{
	return this->dead;
}

Position Player::getPosition()
{
	return this->pos;
}

void Player::setPosition(Position pos)
{
	this->pos = pos;
}

void Player::openInventory()
{
	bool exit = false;
	Item item;

	if (this->inventory.hasItems())
	{
		std::cout << "Your inventory was opened and contains:" << std::endl << std::endl;
		std::string choice;

		this->inventory.display();


		do {
			// Get player input
			std::cout << "What would you like to do?" << std::endl;

			do {
				std::cin >> choice;
			} while (choice != "use" && choice != "exit");

			// Use
			if (choice == "use")
			{
				IItem* item;

				std::cin >> choice;
				item = this->inventory.getItem(choice);

				this->useItem(item);
				exit = true;
			}

		} while (choice != "exit" && !exit);	// Exit inventory
	}
	else
		std::cout << "You have no items!" << std::endl << std::endl;

	std::cout << "You are now leaving inventory!" << std::endl;
}

Inventory& Player::getInventory()
{
	return this->inventory;
}
