#pragma once
#ifndef IDUNGEON_H
#define IDUNGEON_H

#include <string>
#include "IMonster.h"
#include "IItem.h"
#include "IRoom.h"

class IDungeon
{
public:
	virtual ~IDungeon() {};

	virtual void generate() = 0;
	virtual void display() = 0;
	virtual Position getRoomPosition(std::string direction, Position pos) = 0;
	virtual IMonster* getMonster(Position pos) = 0;
	virtual IItem* getLoot() = 0;
	virtual void setRoomLoot() = 0;
};

#endif
