#ifndef INVENTORY_H
#define INVENTORY_H

#include "IInventory.h"
#include "IPlayer.h"
#include <vector>

class Inventory : public IInventory
{
public:
	Inventory();
	~Inventory();

	IItem* getItem(std::string choice, int start);
	void display();

private:
	std::vector<IItem*> items;

};

#endif // !INVENTORY_H


