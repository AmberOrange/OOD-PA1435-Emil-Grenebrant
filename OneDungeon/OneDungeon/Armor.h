#pragma once
#ifndef ARMOR_H
#define ARMOR_H

#include "Equipable.h"

class Armor : public Equipable
{
private:
	virtual void generate() { this->value = rand() % 100 + 1; };

	int value;
public:
	Armor() { generate(); };
	virtual ~Armor() {};

	virtual bool use(IItem** item, int& hp) { item[ARMOR] = this; };
	virtual void display() { std::cout << "Armor " << std::to_string(value) << std::endl; };
	virtual int getStatValue() { return this->value; };
};

#endif
