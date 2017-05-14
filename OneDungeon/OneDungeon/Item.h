#ifndef ITEM_H
#define ITEM_H

#include <cstdlib>
#include "IItem.h"

class Item : public IItem
{
private:
	std::string name;
	int power;
	int slotNum;
	ITEM type;
public:
	Item();
	std::string getString();
	ITEM getItemType();
	int getPower();
};

#endif