#pragma once
#ifndef ICOMBAT_H
#define ICOMBAT_H

class ICombat
{
public:
	virtual ~ICombat() {};

	void virtual initCombat(Player* player, Monster* enemy) = 0;
	void virtual attack() = 0;
	void virtual evade() = 0;
};

#endif
