#ifndef INVENTORY_H
#define INVENTORY_H

#include "IInventory.h"
#include "IPlayer.h"
#include "Item.h"
#include <vector>

class Inventory : public IInventory
{
public:
	Inventory();
	~Inventory();

	IItem* getItem(const std::string gear);
	void display();
	bool hasItems();
	void addItem(Item* _item);

private:
	std::vector<IItem*> items;

};

#endif // !INVENTORY_H


