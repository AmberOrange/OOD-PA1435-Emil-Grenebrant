#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "IGameManager.h"
#include "IDungeon.h"
#include "IPlayer.h"
#include "ICombat.h"
#include "Position.h"

class GameManager : public IGameManager
{
private:
	IDungeon* cave;
	IPlayer* user;
	ICombat* combat;

public:
	GameManager();
	void startGame();
	void checkMap();
	void move(std::string direction);
	void loot();

};
#endif