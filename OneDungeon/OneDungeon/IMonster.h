#pragma once
#ifndef IMONSTER_H
#define IMONSTER_H

#include <time.h>
#include <cstdlib>
#include <iostream>

class IMonster
{
public:
	virtual ~IMonster() {};

	virtual void generate() = 0;
	virtual int getAttackValue() = 0;
	virtual bool inflictDamage(int attackValue) = 0;
	virtual bool calcEvade(int evadeValue) = 0;
	virtual void displayHealth() = 0;
};

#endif
