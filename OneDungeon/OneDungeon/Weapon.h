#pragma once
#ifndef WEAPON_H
#define WEAPON_H

#include "Equipable.h"

class Weapon : public Equipable
{
private:
	virtual void generate() { this->value = rand() % 100 + 1; };

	int value;
public:
	Weapon() { generate(); };
	virtual ~Weapon() {};

	virtual bool use(IItem** item, int& hp) { item[WEAPON] = this; };
	virtual void display() { std::cout << "Weapon " << std::to_string(value) << std::endl; };
	virtual int getStatValue() { return this->value; };
};

#endif
