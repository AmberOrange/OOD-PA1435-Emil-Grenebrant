#pragma once
#ifndef ICOMBAT_H
#define ICOMBAT_H

#include "IPlayer.h"
#include "IMonster.h"

class ICombat
{
public:
	virtual ~ICombat() {};

	void virtual initCombat(IPlayer* player, IMonster* enemy) = 0;
	void virtual attack() = 0;
	void virtual evade() = 0;
};

#endif
