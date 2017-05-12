#include "Inventory.h"


Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

void Inventory::display()
{
	int size = this->items.size();
	for (int i = 0; i < size; i++)
		this->items[i]->display();
}

IItem* Inventory::getItem(std::string choice, int start)
{
	int size = this->items.size();
	for (int i = 0; i < size; i++)
	{
		if (choice.find(this->items[i]->getString(), start))
			return this->items[i];
	}

	return nullptr;
}