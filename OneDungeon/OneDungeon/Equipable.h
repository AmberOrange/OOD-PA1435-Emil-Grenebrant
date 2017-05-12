#pragma once
#ifndef EQUIPABLE_H
#define EQUIPABLE_H

#include "IItem.h"

class Equipable : public IItem
{
private:
	virtual void generate() = 0;

public:
	virtual ~Equipable() {};

	virtual bool use(IItem** item, int& hp) = 0;
	virtual void display() = 0;
	virtual int getStatValue() = 0;
};

#endif
