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

	// getItem()	- retrieves item
	//	gear		- string with item name
	//	offset		- int with offset where name starts
	virtual IItem* getItem(const std::string gear, const int offset) = 0;
	
	// display()	- display all items in inventory
	virtual void display() = 0;
};

#endif
