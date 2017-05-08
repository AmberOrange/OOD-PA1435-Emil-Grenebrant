#pragma once
#ifndef IPLAYER_H
#define IPLAYER_H

#include "Position.h"

class IPlayer
{
public:
	virtual ~IPlayer() {};

	virtual void create(Position startRoom) = 0;
	
	virtual int getAttackValue() = 0;
	virtual int getEvadeValue() = 0;
	virtual bool inflictDamage(int attackValue) = 0;
	virtual void setGear(Item* item) = 0;
	virtual bool addLoot(Item* item) = 0;

	virtual Position getPosition() = 0;
	virtual Position setPosition(Position pos) = 0;
};

#endif
