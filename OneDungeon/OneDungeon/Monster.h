#ifndef MONSTER_H
#define MONSTER_H
#define MONSTER_HP_MIN 100
#define MONSTER_HP_MAX 500
#define MONSTER_ATK_MIN 10
#define MONSTER_ATK_MAX 50

#include <cstdlib>
#include "IMonster.h"

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