#include "Inventory.h"


Inventory::Inventory()
{
}

Inventory::~Inventory()
{
}

void Inventory::addItem(Item* _item)
{
	if (_item)	// if item is not nullptr
	{
		Item* temp = new Item(*_item);
		this->items.push_back(temp);
	}
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

void Inventory::removeItem(IItem* _item)
{
	if (_item)
	{
		int size = this->items.size();
		for (int i = 0; i < size; i++)
		{
			if (this->items[i]->getPower() == _item->getPower()
				&& this->items[i]->getItemType() == _item->getItemType()
				&& this->items[i]->getString() == _item->getString())
			{
				this->items.erase(this->items.begin() + i);
				break;
			}
		}
	}
}