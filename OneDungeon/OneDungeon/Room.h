#ifndef ROOM_H
#define ROOM_H
#include <cstdlib>
#include <ctime>
#include "IRoom.h"
#include "Monster.h"
#include "Item.h"
class Room : public IRoom
{
private:
	Monster* enemy;
	bool enemyDead;
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
	Monster* getMonster();
	void setEnemyStatus(bool value);
	bool isMonsterDead();
};

#endif
