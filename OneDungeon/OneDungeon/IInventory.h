#pragma once
#ifndef IINVENTORY_H
#define IINVENTORY_H

#include "IItem.h"
#include "Item.h"
#include <string>
#include <iostream>

class IInventory
{
public:
	virtual ~IInventory() {};

	// getItem()	- retrieves item
	//	gear		- string with item name
	virtual IItem* getItem(const std::string gear) = 0;
	
	// display()	- display all items in inventory
	virtual void display() = 0;

	// hasItem()	- returns whether or not the inventory has items
	virtual bool hasItems() = 0;

	// addItem()
	//	_item		- the item to add to inventory
	virtual void addItem(Item* _item) = 0;

	// removeItem()
	virtual void removeItem(IItem* _item) = 0;
};

#endif
