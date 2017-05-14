#include "Inventory.h"


Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

void Inventory::addItem(Item* _item)
{
	Item* temp = new Item(*_item);
	this->items.push_back(temp);
}

void Inventory::display()
{
	int size = this->items.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << i + 1 << ". " << std::endl;
		this->items[i]->display();
		std::cout << std::endl;
	}
}

IItem* Inventory::getItem(std::string gear)
{
	int size = this->items.size();
	for (int i = 0; i < size; i++)
	{
		if (gear == this->items[i]->getString())
			return this->items[i];
	}

	return nullptr;
}

bool Inventory::hasItems()
{
	return this->items.size() > 0 ? true : false;
}