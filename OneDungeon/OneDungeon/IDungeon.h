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

	virtual Position generate() = 0;
	virtual void display() = 0;
	virtual Position getRoomPosition(std::string direction, Position pos) = 0;
	virtual IMonster* getMonster(Position pos) = 0;
	virtual IItem* getLoot() = 0;
	virtual void setRoomLoot() = 0;
	virtual bool isMonsterDead(Position pos) = 0;
	virtual void setMonsterDead(Position pos) = 0;
};

#endif
