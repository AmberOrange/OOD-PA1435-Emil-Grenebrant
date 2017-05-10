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
	int virtual evade(IPlayer* player, IMonster* enemy);

public:
	Combat();
	virtual ~Combat();

	void virtual initCombat(IPlayer* player, IMonster* enemy);
};

#endif
