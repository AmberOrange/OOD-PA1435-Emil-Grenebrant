#include "Weapon.h"



void Weapon::generate()
{
	this->atkValue = rand() % 100 + 1;
}

Weapon::Weapon()
{
	generate();
}


Weapon::~Weapon()
{
}
