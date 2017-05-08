#pragma once
#ifndef COMBAT_H
#define COMBAT_H
#include "ICombat.h"
#include <iostream>

class Combat : public ICombat
{
private:
	int getPlayerChoice();

public:
	Combat();
	virtual ~Combat();

	void virtual initCombat(IPlayer* player, IMonster* enemy);
	bool virtual attack(IPlayer* player, IMonster* enemy);
	bool virtual evade(IPlayer* player, IMonster* enemy);
};

#endif
