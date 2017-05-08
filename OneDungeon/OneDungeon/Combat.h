#pragma once
#ifndef COMBAT_H
#define COMBAT_H
#include "ICombat.h"

class Combat : public ICombat
{
public:
	Combat();
	virtual ~Combat();

	void virtual initCombat(IPlayer* player, IMonster* enemy);
	void virtual attack();
	void virtual evade();
};

#endif
