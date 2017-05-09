#ifndef INVENTORY_H
#define INVENTORY_H
#include "IInventory.h"


class Inventory : public IInventory
{
private:
	IItem* items;
public:
	Inventory();

	void equip(std::string choice);
	void getGear(std::string choice);
	void use(std::string choice);
	bool isItem(std::string choice);
	void inventory();
};

#endif