#pragma once
#include "Usable.h"
class HPPot : public Usable
{
private:
	virtual void generate() { this->hp = 50; };

	int hp;

public:
	HPPot() { generate(); };
	virtual ~HPPot() {};

	virtual bool use(IItem** item, int& hp) { hp += this->hp; };
	virtual void display() { std::cout << "Health potion (50)" << std::endl; };
};

