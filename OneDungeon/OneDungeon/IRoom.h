#pragma once
#ifndef IROOM_H
#define IROOM_H

#include "IMonster.h"
#include "Item.h"
#include "Position.h"

class IRoom
{
public:
	virtual ~IRoom() {};

	virtual void generate() = 0;
	virtual void print() = 0;
	virtual Item* getLoot() = 0;
	virtual void getRoomLoot() = 0;
	virtual IMonster* getMonster() = 0;
	virtual bool isMonsterDead() = 0;
};

#endif
