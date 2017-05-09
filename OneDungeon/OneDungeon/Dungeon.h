#ifndef DUNGEON_H
#define DUNGEON_H
#define DUNGEON_WIDTH 6
#define DUNGEON_HEIGHT 6

#include <cstdlib>
#include "IDungeon.h"
#include "Room.h"

class Dungeon : public IDungeon
{
private:
	IRoom** rooms;
public:
	Dungeon();
	virtual ~Dungeon();

	Position generate();
	void display();
	Position getRoomPosition(std::string direction, Position pos);
	IMonster* getMonster(Position pos);
	IItem* getLoot();
	void setRoomLoot();
};

#endif
