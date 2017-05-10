#pragma once
#ifndef EQUIPABLE_H
#define EQUIPABLE_H

#include "IItem.h"

class Equipable : public IItem
{
private:
	virtual void generate() = 0;

public:
	Equipable();
	virtual ~Equipable();

	virtual bool use(IItem* item);
};

#endif
