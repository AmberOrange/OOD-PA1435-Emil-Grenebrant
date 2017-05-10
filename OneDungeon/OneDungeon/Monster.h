#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include "IMonster.h"

class Monster : public IMonster
{
private:
	int hp;
	int atkValue;
	int speed;
	bool dead;

public:
	Monster();
	virtual ~Monster();

	virtual void generate();
	virtual int getAttackValue();
	virtual bool inflictDamage(int attackValue);
	virtual bool calcEvade(int evadeValue);
};

#endif
