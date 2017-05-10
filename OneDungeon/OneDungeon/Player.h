#ifndef PLAYER_H
#define PLAYER_H
#define PLAYER_START_HP 500
#define PLAYER_BASE_ATK 100
#include "IPlayer.h"
#include "Inventory.h"

class Player : public IPlayer
{
private:
	int hp;
	int atkValue;
	bool dead;
	Inventory inventory;
	Position pos;
public:
	Player();

	void create(Position startRoom);

	int getAttackValue();
	int getEvadeValue();
	bool inflictDamage(int attackValue);
	void setGear(IItem* item);
	bool addLoot(IItem* item);

	Position getPosition();
	Position setPosition(Position pos);
};

#endif
