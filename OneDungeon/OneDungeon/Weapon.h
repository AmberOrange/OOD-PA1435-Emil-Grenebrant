#pragma once
#ifndef WEAPON_H
#define WEAPON_H

#include "Equipable.h"

class Weapon : public Equipable
{
	void generate();

	int atkValue;
	
public:
	Weapon();
	virtual ~Weapon();
};

#endif
