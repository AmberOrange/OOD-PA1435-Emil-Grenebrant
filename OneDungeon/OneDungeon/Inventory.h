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

	void equip(std::string, IPlayer* player);		// equip item
	IItem* getGear(std::string choice);				// if item is gear, retrieve it
	void use(std::string choice, IPlayer* player);	// use consumables
	bool isItem(std::string choice);				// will always return true
	void inventory(IPlayer* player);				// Open inventory

private:
	std::vector<IItem*> items;

	std::string getPlayerChoice();

};

#endif // !INVENTORY_H


/*
Frågor:

item->getString()
use - ska spelaren aktivera eller inventory?
isItem ? - vad är syftet med den?

*/

