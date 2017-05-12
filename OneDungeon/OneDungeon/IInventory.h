#pragma once
#ifndef IINVENTORY_H
#define IINVENTORY_H

#include "IItem.h"
#include <string>
#include <iostream>

class IInventory
{
public:
	virtual ~IInventory() {};

	virtual void equip(std::string choice) = 0;		 
	virtual IItem* getGear(std::string choice) = 0;	// Returned void, now returns IItem* 
	virtual void use(std::string choice) = 0;
	virtual bool isItem(std::string choice) = 0;
	virtual void inventory() = 0;
	virtual std::string getPlayerChoice() = 0;		// Added
};

#endif
