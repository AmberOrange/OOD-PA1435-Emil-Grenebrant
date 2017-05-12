#ifndef ROOM_H
#define ROOM_H
#include "IRoom.h"
#include "Monster.h"

class Room : public IRoom
{
private:
	IMonster* enemy;
	IItem* item;
	bool looted;
	Position position;
public:
	Room();
	virtual ~Room();

	void generate();
	void print();
	IItem* getLoot();
	void getRoomLoot();
	IMonster* getMonster(int pos);
};

#endif
