#include "Item.h"

Item::Item()
{
	this->power = 0;
	this->name = "test";
	this->slotNum = 0;
	this->type = ITEM::ARMOR;	// Default armor
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
	std::cout << "Type:		" << this->type << std::endl;
}
