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
	bool dead;
public:
	Monster();
	virtual ~Monster() {};

	void generate();
	int getAttackValue();
	bool inflictDamage(int attackValue);
	bool calcEvade(int evadeValue);
};

#endif