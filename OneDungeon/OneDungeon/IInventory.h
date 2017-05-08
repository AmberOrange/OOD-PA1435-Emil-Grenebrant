#pragma once
#ifndef IINVENTORY_H
#define IINVENTORY_H

#include "IItem.h"
#include <string>

class IInventory
{
public:
	virtual ~IInventory() {};

	virtual IPlayer equip(std::string choice, IPlayer* player) = 0;
	virtual IItem getGear(std::string choice) = 0;
	virtual void use(std::string choice) = 0;
	virtual bool isItem(std::string choice) = 0;
};

#endif
