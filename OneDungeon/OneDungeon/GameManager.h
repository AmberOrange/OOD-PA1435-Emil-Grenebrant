#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "IGameManager.h"
#include "Dungeon.h"
#include "Player.h"
#include "ICombat.h"
#include "Position.h"

class GameManager : public IGameManager
{
private:
	Dungeon cave;
	Player user;
	ICombat* combat;

public:
	GameManager();
	void startGame();
	void checkMap();
	void move(std::string direction);
	void loot();

};
#endif