#pragma once
#ifndef MONSTER_H
#define MONSTER_H

#include <cstdlib>
#include "IMonster.h"
#include "Global.h"

class Monster : public IMonster
{
private:
	int hp;
	int atkValue;
	int speed;
	bool dead;

public:
	Monster();
	~Monster();

	void generate();
	int getAttackValue();
	bool inflictDamage(int attackValue);
	bool calcEvade(int evadeValue);
	void displayHealth();
	bool isMonsterDead();
	
};

#endif
