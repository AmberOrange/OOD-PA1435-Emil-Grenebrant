#pragma once
#ifndef IROOM_H
#define IROOM_H

#include "IMonster.h"
#include "IItem.h"
#include "Position.h"

class IRoom
{
public:
	virtual ~IRoom() {};

	virtual void generate() = 0;
	virtual void print() = 0;
	virtual IItem* getLoot() = 0;
	virtual void getRoomLoot() = 0;
	virtual IMonster* getMonster() = 0;
};

#endif
