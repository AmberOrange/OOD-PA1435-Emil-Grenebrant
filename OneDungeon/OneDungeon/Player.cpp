#include "Player.h"

Player::Player()
{
}

void Player::create(Position startRoom)
{
	this->pos = startRoom;
	this->hp = PLAYER_START_HP;
	this->atkValue = PLAYER_BASE_ATK;
	this->dead = false;
	this->inventory = new Inventory();
}

int Player::getAttackValue()
{
	return 0;
}

int Player::getEvadeValue()
{
	return 0;
}

bool Player::inflictDamage(int attackValue)
{
	return false;
}

void Player::setGear(IItem* item)
{
}

bool Player::addLoot(IItem* item)
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
