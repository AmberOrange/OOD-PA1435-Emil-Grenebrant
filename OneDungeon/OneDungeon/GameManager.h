#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include <iostream>
#include "IGameManager.h"
#include "Dungeon.h"
#include "Player.h"
#include "ICombat.h"
#include "Position.h"
#include "Global.h"
#include "Combat.h"

class GameManager : public IGameManager
{
private:
	Dungeon cave;
	Player user;
	Combat combat;

public:
	GameManager();
	void startGame();
	void checkMap();
	void move(std::string direction);
	void loot();
	bool isPlayerDead();
	void openUserInventory();
};
#endif