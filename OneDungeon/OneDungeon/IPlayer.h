#pragma once
#ifndef IPLAYER_H
#define IPLAYER_H

#include "IInventory.h"
#include "Position.h"

class IPlayer
{
public:
	virtual ~IPlayer() {};

	virtual void create(Position startRoom) = 0;
	
	virtual int getAttackValue() = 0;
	virtual int getEvadeValue() = 0;
	virtual bool inflictDamage(int attackValue) = 0;
	virtual void setGear(IItem* item) = 0;
	virtual bool addLoot(IItem* item) = 0;
	virtual bool isPlayerDead() = 0;

	virtual Position getPosition() = 0;
	virtual void setPosition(Position pos) = 0;
};

#endif
