#ifndef ROOM_H
#define ROOM_H
#include <cstdlib>
#include "IRoom.h"
#include "Monster.h"
#include "Item.h"
class Room : public IRoom
{
private:
	IMonster* enemy;
	bool enemyAlive;
	Item* item;
	bool looted;
	Position position;

public:
	Room();
	virtual ~Room();

	void generate();
	void print();
	Item* getLoot();
	void getRoomLoot();
	IMonster* getMonster();
	void setEnemyAlive(bool value);
};

#endif
