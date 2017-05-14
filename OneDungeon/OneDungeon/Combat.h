#pragma once
#ifndef COMBAT_H
#define COMBAT_H
#include "ICombat.h"
#include <iostream>

class Combat : public ICombat
{
private:
	int getPlayerChoice();
	bool virtual attack(IPlayer* player, IMonster* enemy);
	bool virtual evade(IPlayer* player, IMonster* enemy);

public:
	Combat();
	virtual ~Combat();

	bool virtual initCombat(IPlayer* player, IMonster* enemy);
};

#endif
