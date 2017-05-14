#include "Item.h"

Item::Item(std::string name, int power, ITEM type, int slotNum)
{
	this->power = power;
	this->name = name;
	this->slotNum = slotNum;
	this->type = type;	// Default armor
}
Item::Item()
{
	this->power = 0;
	this->name = "test";
	this->slotNum = 0;
	this->type = ITEM::HPPOT;
}

std::string Item::getString()
{
	return this->name;
}

ITEM Item::getItemType()
{
	return this->type;
}

int Item::getPower()
{
	return this->power;
}

void Item::display()
{
	std::cout << "Name:		" << this->name << std::endl;
	std::cout << "Power:		" << this->power << std::endl;

	switch (this->type)
	{
	case ITEM::ARMOR:
		std::cout << "Type:		" << "Armor" << std::endl;
		break;
	case ITEM::WEAPON:
		std::cout << "Type:		" << "Weapon" << std::endl;
		break;
	case ITEM::HPPOT:
		std::cout << "Type:		" << "Health potion" << std::endl;
		break;
	}
}
