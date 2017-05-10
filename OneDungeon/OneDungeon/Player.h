#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include "IPlayer.h"

class Player
{
private:
	int hp;
	int atkValue;
	int evValue;
	bool dead;
	IInventory* inv;

public:
	Player();
	virtual ~Player();

	virtual void create(Position startRoom);

	virtual int getAttackValue();
	virtual int getEvadeValue();
	virtual bool inflictDamage(int attackValue);
	virtual void setGear(IItem* item);
	virtual bool addLoot(IItem* item);
	virtual void inventory();

	virtual Position getPosition();
	virtual Position setPosition(Position pos);
};

#endif
