#ifndef DUNGEON_H
#define DUNGEON_H


#include <cstdlib>
#include "IDungeon.h"
#include "Room.h"
#include "Global.h"

class Dungeon : public IDungeon
{
private:
	Room** rooms;
public:
	Dungeon();
	virtual ~Dungeon();

	Position generate();
	void display();
	Position getRoomPosition(std::string direction, Position pos);
	IMonster* getMonster(Position pos);
	IItem* getLoot(Position pos);
	void setRoomLoot();
};

#endif
