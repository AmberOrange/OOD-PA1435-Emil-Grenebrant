#pragma once
#ifndef IROOM_H
#define IROOM_H

class IRoom
{
public:
	virtual ~IRoom() {};

	virtual void generate() = 0;
	virtual void print() = 0;
	virtual Monster(int pos) = 0;
	virtual Item getLoot() = 0;
	virtual void getRoomLoot() = 0;
	virtual Monster getMonster() = 0;
};

#endif
