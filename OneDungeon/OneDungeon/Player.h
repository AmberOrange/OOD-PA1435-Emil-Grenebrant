#ifndef PLAYER_H
#define PLAYER_H
#define PLAYER_START_HP 500
#define PLAYER_BASE_ATK 100
#define PLAYER_BASE_DEF 50
#include "IPlayer.h"
#include "Inventory.h"

class Player : public IPlayer
{
private:
	int hp;
	int atkValue;
	int defValue;		// added, for gear
	int evValue;
	bool dead;
	Inventory inventory;
	Position pos;
public:
	Player();

	void create(Position startRoom);
	void openInventory();
	Inventory getInventory();

	virtual int getAttackValue();
	virtual int getEvadeValue();
	virtual bool inflictDamage(int attackValue);
	virtual void setGear(IItem* item);
	virtual bool addLoot(IItem* item);
	virtual bool isPlayerDead();
	virtual void useItem(IItem* item);
	virtual void displayHealth();

	virtual Position getPosition();
	virtual void setPosition(Position pos);
	void setPlayerDead();
};

#endif
