#pragma once
#include "Usable.h"
class HPPot : public Usable
{
private:
	int hp;

public:
	HPPot() { this->hp = 50; };
	virtual ~HPPot() {};
};

