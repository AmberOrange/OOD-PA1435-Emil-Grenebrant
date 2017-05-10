#pragma once
#include "Equipable.h"
class Armor : public Equipable
{
private:
	void generate();

	int armorValue;

public:
	Armor();
	virtual ~Armor();
};

