#pragma once
#ifndef IGAMEMANAGER_H
#define IGAMEMANAGER_H

#include <string>

class IGameManager
{
public:
	virtual ~IGameManager() {};

	virtual void startGame() = 0;
	virtual void checkMap() = 0;
	virtual void move(std::string direction) = 0;
	virtual void loot() = 0;
};

#endif
