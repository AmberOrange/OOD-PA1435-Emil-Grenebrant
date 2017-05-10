#include "Armor.h"



void Armor::generate()
{
	this->armorValue = rand() % 100 + 1;
}

Armor::Armor()
{
	generate();
}


Armor::~Armor()
{
}
