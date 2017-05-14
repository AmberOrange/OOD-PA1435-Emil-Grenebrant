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
