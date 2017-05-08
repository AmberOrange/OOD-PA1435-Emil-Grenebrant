#pragma once
#ifndef IINVENTORY_H
#define IINVENTORY_H

#include <string>

class IInventory
{
public:
	virtual ~IInventory() {};

	virtual Player equip(std::string choice, Player* player) = 0;
	virtual Item getGear(std::string choice) = 0;
	virtual void use(std::string choice) = 0;
	virtual bool isItem(std::string choice) = 0;
};

#endif
